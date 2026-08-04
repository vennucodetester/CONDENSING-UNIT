---
name: token-conservation
description: Best practices and strict rules for minimizing token consumption, avoiding context window bloat, and preventing wasteful tool calls during AI agent interactions.
---

# Token Conservation & Efficiency Protocol

This skill defines strict guidelines for AI agents and users to maximize token efficiency, conserve context window budget, and eliminate wasteful LLM operations.

---

## 1. File Inspection & Search Rules

- **Use Targeted Line Ranges**: Never call `view_file` without `StartLine` and `EndLine` on files larger than ~100 lines. Pinpoint the exact target block using `grep_search` first.
- **Avoid Blind Directory Scans**: Do not recursively list large directories (`list_dir`). Search specifically for relevant file names or patterns.
- **Never Output Full Source Files in Chat**: Summarize edits using concise GitHub-style diffs or line references rather than outputting entire source files in chat responses.

---

## 2. Tool Execution & Output Management

- **No Diagnostic Speculation Loops**: Read failure tracebacks strictly once using targeted log tools, fix the root cause, and verify. Do not re-run failing test suites repeatedly without changes between executions.
- **Non-Blocking Execution without Polling**: When launching long-running commands via `run_command`, stop calling polling tools. Allow the background task system to wake the agent upon completion.
- **Use `replace_file_content` over `write_to_file`**: Modify only the specific lines changing in existing files instead of overwriting entire multi-hundred-line documents.

---

## 3. Communication Style & Response Formatting

- **Eliminate Conversational Fluff**: Omit pleasantries, generic intros ("Sure, I can help with that!"), and lengthy explanations of standard procedures.
- **High-Density Markdown**: Present findings, test results, and next steps in compact bullet points and markdown tables.
- **No Double Summaries**: When updating an artifact file (e.g. `implementation_plan.md` or `walkthrough.md`), reference the file directly instead of repeating its entire contents in the chat message.

---

## 4. Transcript & Log Auditing

- **Use Compact Transcripts**: Rely on `transcript.jsonl` and `grep_search` to inspect past context rather than reading massive raw `transcript_full.jsonl` files.
- **Filter Log Outputs**: Limit terminal output buffers when running commands (`pytest -q` or targeted test filters like `pytest tests/test_scenarios.py::TestName`) to prevent long tracebacks from consuming context.

---

## 5. Agent & Subagent Orchestration

- **Sharp Subagent Prompts**: Provide complete, unambiguous context when invoking subagents (`invoke_subagent`) so they can finish their subtask in a single turn without clarification roundtrips.
- **Single Responsibility Subagents**: Launch subagents only for heavy parallel tasks or isolated research, preventing main context bloat.
