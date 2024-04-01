gcc -c book_fun.c 
gcc -c books_catalog.c
gcc -c main_library.c
gcc -o code_exe book_fun.o books_catalog.o main_library.o
./code_exe
rm *.o 
rm *exe 