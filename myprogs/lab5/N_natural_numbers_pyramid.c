#include <stdio.h>
int main()
{
    int i = 1, number;
    printf("Enter a number whose pyramid is needed? ");
    scanf("%d", &number);
    while (i <= number)
    {
        printf("%d\n", i);
        i++;
    }
    printf("Finish");
    return 0;
}