#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int row = n; row >= 1; row--)
    {
        for (int column = 1; column <= row; column++)
            printf("*");
        for (int column2 = 0; i < n - row; column2++)
            printf("@");

        printf("\n");
    }
    return 0;
}
