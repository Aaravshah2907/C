#include<stdio.h>
int main()
{
int x = 12;
printf("%5d\n",x);
printf("%-5d\n",x);
float f = 234.5678;
printf("%-8.2f\n",f);
printf("%+8.2f\n",f);
printf("%+-8.2f\n",f);
char ch = 'Y';
printf("%c\n",ch);
return 0;
}