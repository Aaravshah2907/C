#include <stdio.h>

int fibonacci(int a, int b, int n, int count)
{
	count++;
	int sum = a + b;
	if(count<n)
		return fibonacci(b, sum, n, count);
	else
		return sum;
}

int main(int argc, char const *argv[])
{
	int num, a=0, b=1, count = 2;
	printf("Enter Value of n: ");
	scanf("%d",&num);
	int nth = fibonacci(a , b, num, count);
	printf("%dth fibonacci number is: %d\n",num, nth );
	return 0;
}