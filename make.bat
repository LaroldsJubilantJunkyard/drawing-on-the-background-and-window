:: delete previous files
DEL *.gb

:: compile .c files into .o files
C:\gbdk\bin\lcc -c -o main.o main.c
C:\gbdk\bin\lcc -c -o LaroldsJubilantJunkyard.o LaroldsJubilantJunkyard.c

:: Compile a .gb file from the compiled .o files
C:\GBDK\bin\lcc -Wm-yC  -o DrawingOnTheBackgoundAndWindow.gb main.o LaroldsJubilantJunkyard.o

:: delete intermediate files created for the conmpilation process
DEL *.asm
DEL *.lst
DEL *.ihx
DEL *.sym
DEL *.o
