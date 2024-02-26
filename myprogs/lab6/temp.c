#include <stdio.h>
int main(int argc, char const *argv[])
{
	int choice = 0;
	float tempc = -300.0, tempf = -500.0;

	while (1 > choice || choice >4)
	{
		printf("Enter Choice (1 -3): ");
		scanf("%d" , &choice);
	}

	if(choice == 1)
	{
		while(tempc <= -273.15)
		{
			printf("Enter Temp in C: ");
			scanf("%f", &tempc);
		}
		tempf = tempc*9.0/5 + 32.0;
		printf("%f C is equivalent to %f F", tempc, tempf);
	}
	else if (choice == 2)
	{
		while(tempf <= -459.67)
		{
			printf("Enter Temp in F: ");
			scanf("%f", &tempf);
		}
		tempc = (tempf - 32.0)* 5.0/9;
		printf("%f C is equivalent to %f F", tempc, tempf);
	}

	return 0;
}