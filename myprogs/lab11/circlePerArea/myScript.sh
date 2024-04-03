gcc -c circle.c
gcc -c circle_main.c
gcc -o file_exe circle.o circle_main.o
./file_exe
rm *.o
rm *exe