#include <stdio.h>
int main()
{
float cel, far;
/* variable declarations */
printf("Enter the temperature in deg. Celsius: ");
scanf("%f", &cel);
far = cel * 1.8 + 32;
/* getting user input */
printf("%f degree C = %f degree F\n", cel, far);
/* printing the output */
return 0;
}
