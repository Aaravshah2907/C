#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num;
	long sum = 0,fact=1;
	printf("Enter Value of n: ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		fact = fact*i;
		sum += (fact/i);
	}
	printf("%ld\n", sum);
	return 0;
}