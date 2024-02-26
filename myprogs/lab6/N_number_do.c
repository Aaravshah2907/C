#include<stdio.h>
int main(int argc, char const *argv[])
{
	int N;
	scanf("%d", &N);
	int sum = 0; /* let sum be zero, to begin with */
	int num = 1; /* start adding up from 1 */
	
	do{
	 /* as long as num has not exceeded N...*/
		printf("%d\n", num); /* print out the number */
		num++; /* increment it to the next value*/
	}while (num <= N);
	printf("Bye\n");
	return 0;
}