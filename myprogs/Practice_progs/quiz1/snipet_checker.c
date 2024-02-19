#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* Q7
    int i = -1, j = -1, m = 0, n = 0;
    n = ++i && j++ || m++;
    printf("%d %d", i, j);
    */
    /*
    Q8
    int a = 1, b = 1;
    int c = a || --b;
    int d = a-- && --b;
    printf("%d %d %d %d", a, b, c, d);
    */
    /*
    Q9
    int x, y = 5, z = 5;
    x = y == z;
    printf("%d", x);
    */
    /*
    Q10
    int i = 4, j = 1, m = 0, n = 0;
    m = i || j++;
    n = ++i && --j;
    printf("%d %d %d %d", i, j, m, n);
    */
    /*
    Q11
     int a = 1, b = 1, c = 1, d = 1;
     a = 1 + (--a || b--);
     c = 2 + (b && ++d);
     d = a + d++;
     printf("%d %d %d %d", a, b, c, d);
     */
    /*
    int i = (1, 2, 3);
    printf("%d", i);
    */
    /*Q16
        int a = 0, b = 3;
        int x = a || b++;
        printf("%d", a += 5);
    */
    /*
     int x = 1 < 4 ? 3 < 4 && 4 != 0 ? 40 : 50 : 60;
     printf("%d", x);
     */
    /*
    int i = 50;
    int j = ++(i++);
    printf("%d", j);
    */
    /*
     int a = -1;
     int b = a++;
     int c = sizeof(++a) + b++;
     printf("%d %d %d", a, b, c);
     */
    int x;
    float y;
    x = 5, 7, 9;
    y = 0;
    printf("%f", x + y);
    return 0;
}
