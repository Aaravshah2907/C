#include<stdio.h>
int main(int argc, char const *argv[])
{
	int dec = 0, number = 1;
	printf("Enter a decision: ");
	scanf("%d", &dec);

	for (int i = 1; i <= dec; ++i)
	{
		for (int j = 1; j <= i; ++j, number++)
		{
			printf("%d\t", number );

		}
		printf("\n");
	}
	return 0;
}