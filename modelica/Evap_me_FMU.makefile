# FIXME: before you push into master...
RUNTIMEDIR=C:/Program Files/OpenModelica1.26.3-64bit/include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f 577.fmutmp/sources/Evap_me_init.xml
	cp -a "C:/Program Files/OpenModelica1.26.3-64bit/share/omc/runtime/c/fmi/buildproject/"* 577.fmutmp/sources
	cp -a Evap_me_FMU.libs 577.fmutmp/sources/

