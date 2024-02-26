#include <stdio.h>

int prime(int n)
{
	int i =2, count = 0;
	for (; i < n; ++i)
	{
		if (n%i == 0)
			count++;
	}
	return (count==0)?1:0;
}

int main(int argc, char const *argv[])
{
	int num;
	printf("Enter Value of n: ");
	scanf("%d",&num);
	(prime(num))?printf("%d is prime", num):printf("%d is not prime", num);
	return 0;
}