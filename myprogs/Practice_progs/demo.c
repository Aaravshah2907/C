#include <stdio.h>
int main(int argc, char const *argv[])
{
    char s[50];
    for (int i = 0; i < 50; i++)
    {
        scanf(" %c", &s[i]);
    }

    printf("%s", s);
    return 0;
}
