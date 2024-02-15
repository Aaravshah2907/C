#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int space = 0; space < n - row; space++)
        {
            printf(" ");
        }

        for (int column = 1; column <= row; column++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
