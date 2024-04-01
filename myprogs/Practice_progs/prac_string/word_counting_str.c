#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char string[150];
	int i = 0, count =0;
	printf("Enter a string: ");

	gets(string);
	while(string[i] != '\0')
	{
		while(isspace(string[i]))
			i++;
		if(string[i]!='\0')
		{
			count++;
			while(!isspace(string[i]) && string[i] != '\0')
				i++;
		}
	}
	printf("Number of words is %d\n", count);
	return 0;
}