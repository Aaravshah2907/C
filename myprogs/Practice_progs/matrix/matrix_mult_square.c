#include <stdio.h>

#define size_row 2
#define size_col 2
#define size_common 2

void init_arr(int arr[size_row][size_col])
{
    for (int i = 0; i < size_row; i++)
        for (int j = 0; j < size_col; j++)
            arr[i][j] = 0;
}

void print_arr(int arr[size_row][size_col])
{
    printf("Starting to print an array: \n");
    for (int i = 0; i < size_row; i++)
    {
        for (int j = 0; j < size_col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void accept_arr(int arr[size_row][size_col])
{
    printf("Starting to accept an array\n");
    for (int i = 0; i < size_row; i++)
        for (int j = 0; j < size_col; j++)
        {
            printf("Enter value for position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
}

void mult_arr(int arrA[size_row][size_col], int arrB[size_row][size_col], int arrC[size_row][size_col])
{
    for (int i = 0; i < size_row; i++)
    {
        for (int j = 0; j < size_col; j++)
        {
            arrC[i][j] = 0;
            for (int k = 0; k < size_common; k++)
            {
                arrC[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }
}

int main()
{
    int arr1[size_row][size_col], arr2[size_row][size_col], arr3[size_row][size_col];
    init_arr(arr1);
    init_arr(arr2);
    accept_arr(arr1);
    accept_arr(arr2);
    /*
    print_arr(arr1);
    print_arr(arr2);
    */
    mult_arr(arr1, arr2, arr3);
    print_arr(arr3);
    return 0;
}
