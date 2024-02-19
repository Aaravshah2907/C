#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 5;
    int b = a;
    printf((b % a) ? "Yes" : "No");
    return 0;
}
