gcc -c reverseArray_main.c
gcc -c reverseArray_PassbyPointer.c
gcc -c reverseArray_PassbyReference.c
gcc -o exe reverseArray_main.o reverseArray_PassbyPointer.o reverseArray_PassbyReference.o
./exe
rm *.o
rm exe