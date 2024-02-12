#include <stdio.h>
int main(int argc, char const *argv[])
{
	int dec;
	printf("Enter a decision (Number you want): ");
	scanf("%d", &dec);
	int sum = 0, num = 1; /* start adding up from 1 */
	while (num <= dec) /* as long as num has not exceeded N...*/
	{
	printf("%d\n", num); /* print out the number */
	num++; /* increment it to the next value*/
	}
	printf("Bye\n");
	return 0;
}
