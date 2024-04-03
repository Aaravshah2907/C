gcc -c transposeMain.c
gcc -c transpose.c
gcc -o exe transpose.o transposeMain.o
./exe
rm *.o
rm *exe