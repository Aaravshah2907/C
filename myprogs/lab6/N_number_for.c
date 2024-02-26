#include<stdio.h>
int main(int argc, char const *argv[])
{
	int N;
	scanf("%d", &N);
	int sum = 0; /* let sum be zero, to begin with */
	 /* start adding up from 1 */
	for(int num = 1;num <= N;num++) /* as long as num has not exceeded N...*/
	{
		printf("%d\n", num); /* print out the number */
	}
	printf("Bye\n");
	return 0;
}