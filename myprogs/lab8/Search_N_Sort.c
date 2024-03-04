#include <stdio.h>

int linearSearch(int arr[10], int key)
{
    for (int i = 0; i < 10; ++i)
        if (arr[i] == key)
            return i;
    return -1;
}

void sortDec(int arr[10])
{
    int sorted = 0;
    for (int a = 9; a >= 0 && !sorted; --a)
    {
        sorted = 1;
        for (int j = 9; j > 9 - a; --j)
        {
            if (arr[j - 1] < arr[j])
            {
                sorted = 0;
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[10], int key)
{
    sortDec(arr);
    int a = 0, b = 9, mid = 0;
    while (a != b)
    {
        mid = (a + b) / 2;
        if (key < arr[mid])
            a = mid + 1;
        else if (key > arr[mid])
            b = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main()
{
    int arr[10], dec = -1, result;
    while (dec > 5 || dec < 0)
    {
        printf("Enter a value between 1 & 4: ");
        scanf("%d", &dec);
    }
    if (dec == 4)
        return 0;

    printf("Enter 10 Integer values: \n");
    for (int i = 0; i < 10; ++i)
        scanf("%d", &arr[i]);

    switch (dec)
    {
    case 1:
        int key1;
        printf("Enter value to search: ");
        scanf("%d", &key1);
        result = linearSearch(arr, key1);
        if (result != -1)
            printf("Element found at %dth position\n", result);
        else
            printf("%d not found in the array\n", key1);
        break;
    case 2:
        int key2;
        printf("Enter value to search: ");
        scanf("%d", &key2);
        result = binarySearch(arr, key2);
        if (result != -1)
            printf("Element found at %dth position\n", result);
        else
            printf("%d not found in the array\n", key2);
        break;
    case 3:
        sortDec(arr);
        printf("Sorted array : ");
        for (int i = 0; i < 10; ++i)
        {
            printf("%d ", arr[i]);
        }
        break;
    }
    return 0;
}