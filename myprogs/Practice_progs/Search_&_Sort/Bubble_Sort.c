#include <stdio.h>

int main()
{
    int arr[10], sorted = 0, temp = 0, counter = 0;
    printf("Enter 10 values: ");

    for (int i = 0; i < 10; ++i)
        scanf("%d", &arr[i]);

    for (int a = 0; a < 9 && !sorted; ++a)
    {
        sorted = 1;
        printf("Entered %du ", a);
        for (int j = 0; j < 9 - a; ++j)
        {
            printf("%dd ", j);
            if (arr[j] > arr[j + 1])
            {
                sorted = 0;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                counter++;
            }
        }
        printf("\n");
    }

    printf("Values sorted ascending: ");
    for (int i = 0; i < 10; ++i)
        printf("%d ", arr[i]);
    printf("\nThe execution ran for %d times.\n", counter);
    return 0;
}