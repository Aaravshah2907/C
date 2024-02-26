#include <stdio.h>

long factorial(int n)
{
	if (n>2)
		return n * factorial(n-1);
	else
		return 2;
}

int main(int argc, char const *argv[])
{
	int num;
	long sum=1;
	printf("Enter Value of n: ");
	scanf("%d",&num);
	for(int i=2;i<=num;i++)
	{
		sum += (factorial(i)/i);
	}
	printf("%ld\n", sum);
	return 0;
}