#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10], counter = 0, a = 0, b = 9, mid, search;

    printf("Enter value you want to search in the given list\n");
    scanf("%d", &search);

    for (int i = 0; i < 10; ++i)
        arr[i] = i * i;
    while (a <= b)
    {
        mid = (a + b) / 2;
        counter++;
        if (search > arr[mid])
            a = mid + 1;
        else if (search < arr[mid])
            b = mid - 1;
        else
        {
            printf("Element found at location %d.\n", mid);
            printf("No. of exec: %d\n", counter);
            return 0;
        }
    }
    printf("Element %d not in the list\n", search);
    printf("No. of exec: %d\n", counter);
    return 0;
