#include <stdio.h>
int main(int argc, char const *argv[])
{
	int rows_max;
	printf("Enter a decision (Number of rows): ");
	scanf("%d", &rows_max);

	for (int i = 1; i < 2*rows_max; ++i)
	{
		printf("*");
	}

	printf("\n");

	for (int row = 2; row <= rows_max; ++row)
	{
		for (int space_before = 1; space_before < row; ++space_before)
		{
			printf(" ");
		}
		printf("*");
		for (int i = 0; i < 2*(rows_max - row) - 1; ++i)
		{
			printf(" ");
		}
		if (rows_max != row)
			printf("*\n");
		else
			printf("\n");
	}
	return 0;
}