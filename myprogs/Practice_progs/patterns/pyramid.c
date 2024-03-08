#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i=1; i<=2*n -1; i++)
		printf("%d",i);
    printf("\n");

    for (int row = n-1; row >=1; row--)
    {
        for (int space1 = 0; space1 < n - row; space1++)
            printf(" ");
		printf("%d", 1);

		int ast = 1;
        for (; ast < 2 * row - 2; ast++)
            printf(" ");
        if(row != 1)
			printf("%d", 2*row-1);

        printf("\n");
    }
    return 0;
}
