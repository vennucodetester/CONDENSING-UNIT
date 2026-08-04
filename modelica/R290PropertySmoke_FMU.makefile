# FIXME: before you push into master...
RUNTIMEDIR=C:/Program Files/OpenModelica1.26.3-64bit/include/omc/c/
#COPY_RUNTIMEFILES=$(FMI_ME_OBJS:%= && (OMCFILE=% && cp $(RUNTIMEDIR)/$$OMCFILE.c $$OMCFILE.c))

fmu:
	rm -f 120.fmutmp/sources/R290PropertySmoke_init.xml
	cp -a "C:/Program Files/OpenModelica1.26.3-64bit/share/omc/runtime/c/fmi/buildproject/"* 120.fmutmp/sources
	cp -a R290PropertySmoke_FMU.libs 120.fmutmp/sources/

