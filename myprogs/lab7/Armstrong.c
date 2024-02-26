#include <stdio.h>
#include<math.h>
#define N 4

int isArmstrong(int n){
	int og = n,a,b,c,d, sum = 0;
	a = n%10;
	n = n/10;
	b = n%10;
	n = n/10;
	c = n%10;
	n = n/10;
	d = n%10;
	sum = pow(a,N) +pow(b,N)+pow(c,N)+pow(d,N);
	return (sum==og);
}

int main(int argc, char const *argv[])
{
	int num1, num2;
	printf("Enter lower %d digit number: ", N);
	scanf("%d", &num1);
	printf("Enter higher %d digit numberL: ", N);
	scanf("%d", &num2);
	for (int i = num1; i < num2; ++i)
	{
		if (isArmstrong(i))
		{
			printf("%d\t\t", i);
		}
	}
	return 0;
}