#include <stdio.h>
int main(int argc, char const *argv[])
{
	int row_max, number = 1;
	printf("Enter a decision (Number of rows): ");
	scanf("%d", &row_max);
	for (int i = 1; i <= row_max; ++i)
	{
		for (int j = 1; j <= i; ++j, ++number)
		{
			printf("%d\t", number);
		}
		printf("\n");
	}
	return 0;
}