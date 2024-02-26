#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c,d;
	scanf("%d %d %d %d", &a, &b,&c,&d);
	int max, num1, num2;
	if (a>b && c>d)
	{
		if (b > c)
			num1 = a, num2 = b, max = a + b;
		else
			num1 = a, num2 = c, max = a + c;
	}
	else if(a<b && c<d)
	{
		if (b > c)
			num1 = d, num2 = b, max = d + b;
		else
			num1 = d, num2 = c, max = d + c;
	}
	else if(a<b && c>d)
	{
		if (a > c)
			num1 = a, num2 = b, max = a + b;
		else
			num1 = b, num2 = c, max = b + c;
	}
	else if(a>b && c<d)
	{
		if (b > d)
			num1 = a, num2 = b, max = a + b;
		else
			num1 = a, num2 = d, max = a + d;
	}
	printf("%d + %d = %d\n",num1, num2, max);
	return 0;
}