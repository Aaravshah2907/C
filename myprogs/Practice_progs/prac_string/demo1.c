#include <stdio.h>
#include <string.h>
// To accept characters with spaces
// Use this

/*
void main(int argc, char const *argv[])
{
	char text[30];
	scanf("%[A-Za-z1-9,-(){}^ ]s", text);
	printf("%s\n", text);
}
*/

// To input using gets
// Warning will appear --> ignore it

// void main(int argc, char const *argv[])
// {
// 	char str[200];
// 	gets(str);
// 	printf("%s\n", str);
// }


// // To remove all spaces from the user input/string
// void main(int argc, char const *argv[])
// {
// 	char text[80], stext[80];
// 	int i,j;
// 	printf("Enter Text: ");
// 	gets(text);
// 	for (i = 0, j=0; text[i]!='\0'; i++)
// 	{
// 		if (text[i]!=' ')
// 			stext[j++] = text[i];
// 	}
// 	stext[j] = '\0';
// 	printf("Text without spaces: %s\n", stext);
// }