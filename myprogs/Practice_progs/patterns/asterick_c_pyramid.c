#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int space1 = 0; space1 < n - row; space1++)
            printf("@");
        for (int ast = 0; ast < 2 * row - 1; ast++)
            printf("*");
        for (int space2 = 0; space2 < n - row; space2++)
            printf("#");
        printf("\n");
    }
    return 0;
}
