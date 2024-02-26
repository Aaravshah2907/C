#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num, a=0,b=1, sum=1;
	printf("Enter Value of n: ");
	scanf("%d",&num);
	for (int i = 3; i < num+1; ++i)
	{
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%d\n",sum );
	return 0;
}