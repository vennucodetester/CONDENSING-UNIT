# FIXME: before you push into master...
RUNTIMEDIR=C:/Users/silam/AppData/Local/OpenModelica1270/include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f 199.fmutmp/sources/ClosedLoopM1eCS_v2_init.xml
	cp -a "C:/Users/silam/AppData/Local/OpenModelica1270/share/omc/runtime/c/fmi/buildproject/"* 199.fmutmp/sources
	cp -a ClosedLoopM1eCS_v2_FMU.libs 199.fmutmp/sources/

