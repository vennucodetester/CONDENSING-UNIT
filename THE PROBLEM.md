# THE PROBLEM

*Written to be understood without any knowledge of refrigeration, Modelica, or
programming. Last updated 2026-08-02.*

---

## 1. What we are trying to build

An app where you drag a slider — "cut the evaporator fan to 60%" — and watch every
pressure and temperature in a refrigeration system respond the way a real machine would,
with an explanation of *why* each one moved.

The app already exists. The **physics inside it does not.** Right now it runs on
placeholder formulas that are known to be wrong in ways that would teach you the
opposite of the truth. That is why there is a red banner across the top.

We are replacing those placeholders with a real physics model. **We are stuck at the
last step before that works.**

---

## 2. The four things involved, in plain terms

Think of building the physics model like assembling a car from parts made by four
different companies.

### CoolProp — the property database

Ask it "at 4.85 bar, what temperature does propane boil at?" and it answers
"0.72 °C." It knows the physical properties of refrigerants. **This works.**

### ThermoCycle — the component library

Pre-built parts: a compressor, a heat exchanger, a valve. Written by a university so we
don't have to invent refrigeration physics ourselves. **This works.**

### ExternalMedia — the adapter between them

CoolProp is written in one programming language, ThermoCycle in another. ExternalMedia
is the plug that connects them. **This works.**

### OpenModelica — the compiler

This is the one that's broken, and it needs the most explanation.

---

## 3. What a compiler does here, and why that matters

We do **not** write instructions like "first calculate this, then that." We write
**equations** — statements of fact about the system:

> Heat entering the refrigerant = heat leaving the metal tube
> Mass flowing in = mass flowing out
> Pressure and temperature are related by propane's properties

We write down roughly 1,150 such facts. Then the compiler's job is to **figure out how
to solve them** — what order, what's known, what has to be worked out simultaneously.

That's the appeal: we describe *what is true*, and the tool works out *how to compute
it*. It's also the risk. **We don't control the solving. The compiler does.** When the
compiler gets it wrong, we often cannot fix it from our side, because the mistake is in
work we never wrote.

The compiler works in stages:

1. **Read** our equations — ✅ works
2. **Analyse** them and decide a solution strategy — ⚠️ emits errors we cannot yet explain (see §6)
3. **Translate** into the C programming language — ❌ **produces broken code**
4. **Compile** that C into a runnable program — ❌ **fails here**
5. Run it — never reached

---

## 4. The exact failure

### The variable at the centre of it: `phase`

When you describe refrigerant at some point in the system, you carry a small bundle of
numbers — pressure, temperature, density, and so on. ExternalMedia calls this bundle a
`ThermodynamicState`.

One item in that bundle is called **`phase`**. It is a **label**, not a measurement:

- `1` means "the refrigerant here is all liquid, or all vapour"
- `2` means "it's a mixture of both — currently boiling or condensing"

It's a **category**, like "Monday" or "blue." It happens to be *stored* as a whole
number, but nothing about it is a quantity. It makes no sense to ask whether `phase` is
large or small.

The specific one that breaks is **`comp.vaporIn.phase`** — the phase label for the
refrigerant vapour entering the compressor.

### The attribute that shouldn't be there: `nominal`

When a compiler solves hard equations, it uses a trick: it asks each unknown *"roughly
what size are you?"* Pressure might answer "about 500,000." Temperature, "about 300."
This lets it judge whether an error of 0.1 is trivial or catastrophic.

That hint is called **`nominal`**, and it only makes sense for **measured quantities**.
The Modelica language deliberately does **not** give whole numbers a `nominal`, because
asking *"roughly how big is 'Monday'?"* is a meaningless question.

### The mistake

OpenModelica **wrongly includes `phase` in a group of unknowns to be solved
numerically.** Having done that, it dutifully asks every member of the group for its
`nominal` hint — including `phase`.

So it generates C code containing, in effect: *"give me the approximate magnitude of
this category label."*

The C compiler then reads that instruction, looks up what a whole number is allowed to
have, finds no such thing, and stops:

```
error: no member named 'nominal' in 'struct INTEGER_ATTRIBUTE'
```

Translated: **"you asked for the rough size of something that has no size."**

### The two-sentence version

> OpenModelica mistakenly treats a category label — "is the refrigerant boiling or
> not?" — as if it were a measured quantity. It then asks that label how big it is,
> which is a meaningless question, and the resulting code refuses to compile.

---

## 5. Why we cannot simply fix it

**The word `nominal` appears nowhere in anything we wrote.** Search our model files and
you will not find it. The compiler invents it during translation.

Three routes, all closed:

| Attempt | Why it fails |
|---|---|
| Remove `nominal` from our model | It isn't in our model. Nothing to remove. |
| Tell Modelica not to give Integers a `nominal` | The language already doesn't. That's the point — the compiler is doing something the language forbids. |
| Edit the broken C code by hand | The C is **regenerated from scratch on every build.** The edit would vanish the next time anyone rebuilds. It would also hide the separate problem in §6, which is still not understood. |

This is why the work is blocked rather than merely difficult. **It is not our mistake
to correct.**

---

## 6. A second problem — still not understood

Alongside the `nominal` error, two more messages appear:

```
Error: Derivative of expression ...
Error: Internal error Failed to solve ...
```

These are about **stage 2** — the compiler analysing our equations and deciding how to
solve them. They suggest it is struggling with the *mathematics* of a closed loop, which
is genuinely harder than a straight-through pipe: every component's answer depends on
every other component's answer, all at once, going round in a circle.

**We do not yet know what causes these.** They might be our fault. They might be noise.

One explanation was proposed and then **disproved**, and it is worth recording because
it was convincing. We model each coil as five chunks in a row, and each chunk was written
to track its own pressure — while the plumbing forces all five to be equal. Five
independently-changing quantities that cannot actually differ. That looked like the
answer.

It was not. Checking what the compiler actually *built*, rather than what our source
looked like, showed it had already noticed and reduced the five to one. The finished
model carries exactly one pressure per coil. **There was nothing to fix.**

The lesson is worth keeping: reading our own source told us what we had written, not
what the compiler had done with it. Only the built model settled it.

**What we can say:** these messages come from the part of the compiler that works out
rates of change for its own internal bookkeeping, and they did **not** stop it producing
code — the build got past them and died later, at the `nominal` error. Whether they
would cause trouble once running is unknown, because it has never run.

That is also why patching the C would be actively harmful — it would make the `nominal`
error disappear and leave us believing the model was fine, while this second problem sat
underneath it untouched.

---

## 7. What we tested, and what it proved

The obvious question: *is this compiler broken, or is our model wrong?*

**Test 1 — a newer compiler version.** We installed OpenModelica 1.27.0, the current
official release, alongside the 1.26.3 we had been using. We ran our model
**completely unchanged**.

| | 1.26.3 | 1.27.0 |
|---|---|---|
| Equations balance | 1153 / 1153 | 1153 / 1153 |
| Structural check | passes | passes |
| `nominal` error | yes | **yes** |
| Builds and runs | no | **no** |

**What that proved:** the problem is not confined to one old version. It's in the
current official release too.

**What it did NOT prove:** that our model is at fault. The two versions are **built from
the same source code** — they are siblings, not independent opinions. If a fault is
inherited, both siblings show it. Asking the same family twice is not a second opinion.

**Test 2 — an independent compiler.** The plan was to buy Dymola, a rival compiler
written from scratch by a different organisation, and see whether it agreed. That was
going to be expensive, and it turned out to be unnecessary.

**Test 3 — take the model away.** This is the one that settled it, and it cost nothing.

If we suspect the compiler rather than our refrigeration model, the clean way to check is
to **remove the refrigeration model entirely** and see whether the fault survives. So we
wrote the smallest possible thing that still asks the compiler the same question: no
compressor, no coils, no loop, no refrigeration at all. Just a bundle of properties and
two deliberately meaningless equations, whose only job is to force the compiler into the
same kind of simultaneous solve.

Seventeen equations. It failed with the **identical** error.

**What that proves:** there is no model left to blame. You cannot argue that seventeen
lines of nonsense equations are badly-formulated refrigeration physics — there is no
refrigeration physics in them. **The `nominal` fault is the compiler's, confirmed.**

Two follow-ups sharpened it further:

- We tried the obvious workaround — telling the compiler in advance which phase the
  refrigerant is in, so it need not work it out. **Still fails.** The problem is not the
  *value* of the label; it is that the compiler puts the label into the numerical solve
  at all.
- We removed the bundle and asked for the two properties we actually wanted, directly.
  **Works.** Same arithmetic, no bundle, no label, no crash.

**Where that leaves Dymola:** not needed for *this* fault — no rival compiler can add
anything to a result that already excludes our model. It stays a reasonable option for
the *second* problem in §6, which is still not understood. There is also a plainer
reason
the purchase was weaker than it looked: the app ships the model through OpenModelica's
packaging step either way, so even a perfect result from Dymola would have left us
needing OpenModelica to work.

**The next step is to report the fault to the people who maintain the compiler**, with
the seventeen-line example attached. That is free.

---

## 8. What is already working

The blockage is at the last step, not throughout. Everything up to it is proven:

| | Status |
|---|---|
| Propane properties from CoolProp | ✅ verified against an independent calculation |
| A single evaporator coil, alone | ✅ runs, and its energy balance closes **exactly** |
| Airflow affecting heat transfer | ✅ correct physics, matches the textbook law precisely |
| Packaging the model for the app | ✅ runs with the modelling software removed |
| The app itself — UI, honesty machinery, tests | ✅ built and waiting |

**Every individual part works. Only joining them into a closed circle fails.**

---

## 9. Why joining them matters so much

A refrigeration system is a **loop**. The same refrigerant goes round and round:
compressor → condenser → expansion valve → evaporator → compressor.

Because it's a loop, **everything affects everything.** Open the expansion valve and the
discharge pressure changes — even though those are at opposite ends of the machine.

The current placeholder formulas **have no loop.** They're two separate calculators
sharing a window. That's why the app today shows you obviously wrong things:

- Block the condenser → the low side doesn't react at all
- Open the valve → 74% more refrigerant flows and the discharge pressure doesn't twitch

Those aren't small inaccuracies to be tuned away. They're symptoms of there being no
circle. **The moment the loop genuinely closes, they fix themselves** — because the same
refrigerant physically has to pass through every component in turn, so a change anywhere
is felt everywhere, automatically, with no rule written to make it happen.

That is what this blocked step buys, and why it isn't being worked around.

---

## 10. Where things stand

**Settled:** the `nominal` fault is the compiler's. Proved by removing our model
entirely and watching the fault survive. Not our mistake to correct.
**Reported:** filed as OpenModelica issue #16169, with the seventeen-line example.
**Still open:** the second problem in §6. One explanation was proposed and disproved;
we are back to not knowing. It did **not** stop the build, so it is not what is blocking
us today.
**Next step:** get past the `nominal` error — either upstream fixes it, or we stop the
compressor's suction state from entering the numerical solve, which is the one change
the small experiment showed would work.
**No longer needed:** buying Dymola, for the fault that was blocking us.

**Deliberately not being done:**

- Not patching the generated code — fragile, and it would hide the second problem
- Not rewriting the model — we still don't know it's at fault, and rewriting physics to
  dodge a compiler bug would be the worst possible outcome
- Not rewriting the compressor and valve to dodge the bug — the seventeen-line example
  contains neither, so rewriting them would be aiming at the wrong target

**The banner stays up** until the loop genuinely converges and the five failing tests
turn green. Not because of a judgement call — because those tests are the proof.

---

### One-paragraph summary

*We are building a refrigeration simulator by describing physics as equations and
letting a compiler work out how to solve them. All the individual parts work. When we
connect them into a complete loop, the compiler makes a mistake: it treats a category
label — "is the refrigerant boiling?" — as though it were a measured quantity, then asks
that label how large it is. That question is meaningless, and the resulting code will not
compile. The word causing it never appears in anything we wrote; the compiler invents it.
We proved the fault is the compiler's by deleting our refrigeration model entirely and
rebuilding the failure from seventeen lines of deliberate nonsense — there is no model
left to blame. That result was free, and it replaced a plan to buy a rival compiler for
the purpose. What remains is a second, separate problem that may genuinely be ours: the
compiler also struggles with the mathematics of our heat exchangers, and we have a
plausible explanation but no proof. That is the real remaining work. Until it is solved
and the loop actually runs, the app keeps its warning banner, because the placeholder
physics inside it is wrong in ways that would teach the wrong lessons.*
