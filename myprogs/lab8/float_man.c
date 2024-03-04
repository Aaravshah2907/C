#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sorted = 0, temp = 0, counter = 0;
    float arr[10];
    printf("Enter 10 values: ");

    for (int i = 0; i < 10; ++i)
        scanf("%f", &arr[i]);

    for (int a = 0; a < 9 && !sorted; ++a)
    {
        sorted = 1;
        for (int j = 0; j < 9 - a; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                sorted = 0;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                counter++;
            }
        }
    }

    for (int i = 0; i < 10; ++i)
        printf("%f ", arr[i]);
    printf("\n");

    float avg = (arr[0] + arr[1] + arr[8] + arr[9]) / 4;
    printf("Mean is : %f\n", avg);
    return 0;
}