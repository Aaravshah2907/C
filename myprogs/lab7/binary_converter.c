#include <stdio.h>

int binary(int n)
{
    int val, dig = n, def_val = 0, i = 0;
    char bin[32];
    for (int temp = 0; temp < 32; temp++)
        bin[temp] = def_val;

    for (; dig > 0; i++, dig /= 2)
        bin[i] = dig % 2;

    for (int j = 0; j < 16; j++)
    {
        int temp = bin[j];
        bin[j] = bin[32 - j - 1];
        bin[32 - j - 1] = temp;
    }

    for (int j = 0; j < 32; j++)
        printf("%d", bin[j]);

    printf("\n");
    return 0;
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter value of num: ");
    scanf("%d", &num);
    binary(num);
    return 0;
}
