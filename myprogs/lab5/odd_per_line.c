#include <stdio.h>
int main(int argc, char const *argv[])
{
	int dec;
	printf("Enter a decision (Max odd number): ");
	scanf("%d", &dec);
	int num = 1;
	while (num <= dec) /* as long as num has not exceeded N... */
	{
	(num % 2)? printf("%d\n", num):0; // print num if it is odd
	num++; // increment num to next number
	}
	return 0;
}