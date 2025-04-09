CFLAGS   = 
DEFINES  = 
INCLUDES = 
LIBS     = -lstdc++
OBJ      = CGnuplot.o
EXEMPLO  = CGnuplot.teste.o CGnuplot.o
EXEMPLOMIN  =  CGnuplot.teste.min.o CGnuplot.o
EXEMPLO_OSX = CGnuplot.teste_osx.o CGnuplot.o
CC       = g++

.cpp.o:
	$(CC) -c $(CFLAGS) $(DEFINES) $(INCLUDES) $<

all::	CGnuplot.teste CGnuplot.teste.min
min::   CGnuplot.teste.min
osx::	CGnuplot.teste_osx

CGnuplot.o:		CGnuplot.cpp CGnuplot.h
CGnuplot.teste.o:	CGnuplot.teste.cpp CGnuplot.cpp
CGnuplot.testemin.o:	CGnuplot.teste.min.cpp CGnuplot.cpp
CGnuplot.teste_osx.o:	CGnuplot.teste_osx.cpp CGnuplot.cpp

CGnuplot.teste: $(EXEMPLO)
	$(CC) -o $@ $(CFLAGS) $(EXEMPLO) $(LIBS)

CGnuplot.teste.min: $(EXEMPLOMIN)
	$(CC) -o $@ $(CFLAGS) $(EXEMPLOMIN) $(LIBS)

CGnuplot.teste_osx: $(EXEMPLO_OSX)
	$(CC) -o $@ $(CFLAGS) $(EXEMPLO_OSX) $(LIBS)

doc:
	doxygen
dox:
	doxygen
clean:
	rm *.o *~ CGnuplot.teste CGnuplot.teste.min a.out

