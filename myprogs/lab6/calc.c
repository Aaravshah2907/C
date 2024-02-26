#include <stdio.h>
int main(int argc, char const *argv[])
{
	char opern;
	printf("Enter operator: ");
	scanf("%c", &opern);
	int a,b,val;
	printf("Enter 1st operand: ");
	scanf("%d", &a);
	printf("Enter 2nd operand: ");
	scanf("%d", &b);

	if (opern == '+')
		val = a + b;
	else if(opern == '-')
		val = a - b;
	else if(opern == '*')
		val = a * b;
	else if(opern == '%')
	{
		if(b != 0)
			val = a % b;
		else
		{
			printf("Error, cannot divide by 0\n");
			return 0;
		}
	}
	else if (opern == '/')
	{
		if(b != 0)
			val = a / b;
		else
		{
			printf("Error, cannot divide by 0\n");
			return 0;
		}
	}
	else
	{
		printf("Wrong Operator\n");
		return 0;
	}

	printf("%d %c %d = %d\n",a,opern,b,val);
	return 0;
}