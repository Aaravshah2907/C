#include <stdio.h>
int main()
{
	int dec = 0;
	while (dec<999 || dec>10000)
	{
		printf("Enter a decision (4 digit Positive Number): ");
		scanf("%d", &dec);
	}
	int thou = dec/1000;
	int hund = dec/100 - thou*10;
	int ten = dec/10 - hund*10 - thou*100;
	int one = dec - thou*1000 - hund*100 - ten*10;
	printf((thou == one && hund == ten)?"Palindrome\n":"Not a Palindrome\n");
	return 0;
}