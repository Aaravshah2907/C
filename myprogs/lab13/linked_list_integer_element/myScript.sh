gcc -c linkedList.c
gcc -c main.c
gcc -o exe linkedList.o main.o
./exe
rm *.o
rm exe
