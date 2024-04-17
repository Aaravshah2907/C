#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void toLower_ASCII(char* user_string, int length_user_string)
{
	for (int i = 0; i < length_user_string; ++i)
		if ((65 <= (int)*(user_string + i)) && ((int)*(user_string + i) <= 90))
			*(user_string + i) = (char)((int)*(user_string + i) + 32);
}

void toLower_Library(char *user_string, int length_user_string)
{
	for (int i = 0; i < length_user_string; ++i)
		if (isupper(*(user_string + i)))
			user_string[i] = tolower(user_string[i]);
}

int main(int argc, char const *argv[])
{
	char *user_string;
	user_string = (char *)malloc(100*sizeof(char));
	printf("Enter a string: ");
	scanf("%[^\n]s", user_string);
	printf("%s\n", user_string);
	int length_user_string = 0;

	for (; length_user_string < 100 && user_string[length_user_string] != '\0'; ++length_user_string);
/*	toLower_ASCII(user_string, length_user_string);
	printf("%s\n", user_string);*/
	toLower_Library(user_string, length_user_string);
	printf("%s\n", user_string);
	free(user_string);
	return 0;
}