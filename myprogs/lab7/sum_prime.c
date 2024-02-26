#include <stdio.h>

int prime(int n)
{
    int i = 2, count = 0;
    for (; i < n; ++i)
    {
        if (n % i == 0)
            count++;
    }
    return (count == 0) ? 1 : 0;
}

int main(int argc, char const *argv[])
{
    int num, count = 0;
    printf("Enter Value of n: ");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++)
    {
        int rem = num - i;
        if (prime(i) && prime(rem))
        {
            printf("%d & %d are both prime numbers that add upto %d\n", i, rem, num);
            count++;
        }
    }
    if (count == 0)
        printf("No sum of 2 primes can be represented for %d\n", num);
    return 0;
}
