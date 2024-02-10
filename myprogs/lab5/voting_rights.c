#include<stdio.h>
int main(){
    int age;
    printf("Enter your age in years? ");
    scanf("%d", &age);

    (age >= 18)? printf("Eligible\n"):printf("Not Elligible\n");
    return 0;
}