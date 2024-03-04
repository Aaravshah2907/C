#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10], search, counter;
    for (int i = 0; i < 10; ++i)
    {
        arr[i] = 0;
    }

    printf("Enter 10 Integer values one by one: ");
    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value you want to search in the given list\n");
    scanf("%d", &search);
    printf("Values found at indices: ");

    for (int i = 0; i < 10; ++i)
    {
        if (arr[i] == search)
        {
            printf("%d ", i);
            counter++;
        }
    }
    printf("\n");
    if (counter != 0)
    {
        printf("All values found.\n");
        return 0;
    }
    else
    {
        printf("No values found for %d\n", search);
        return 0;
    }
}