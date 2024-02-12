#include <stdio.h>
int main(int argc, char const *argv[])
{
	int dec, sum = 0;
	printf("Enter a decision (A number): ");
	scanf("%d", &dec);
	if (dec>-1)
	{
		for (int i = dec; i <= 2*dec; ++i)
		{
			sum += i;
		}
		printf("Sum is %d\n", sum);
	}
	else
	{
		for (int i = 3*dec; i <= 2*dec; ++i)
		{
			sum += i;
		}
		printf("Sum is %d\n", sum);
	}
	return 0;
}