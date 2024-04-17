#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char Words[35][35], *user_string;
	user_string = (char *)malloc(sizeof(char)*35*35);
	int st_number = 35, row = 0, col=0;
	printf("Enter a string: ");
	scanf("%[^\n]s", user_string);

	for (int i = 0; user_string[i] != '\0'; ++i)
	{
		if (user_string[i] != ' ')
		{
			Words[row][col] = user_string[i];
			col++;
		}
		else
		{
			Words[row][col] = '\0';
			col = 0;
			row++;
		}
	}
	
	if (Words[row][col -1 ] == '.' || Words[row][col - 1] == '?')
		Words[row][col - 1] = '\0';
	else
		Words[row][col] = '\0';

	for (int i = 0; i < row + 1; ++i)
	{
		for (int j = 0; j < row - i; ++j)
		{
			char check1[35], check2[35];
			if (isalpha(Words[j][0]) && isalpha(Words[j+1][0]))
			{
				for (int t = 0; t < st_number; t++)
				{
					check1[t] = toupper(Words[j][t]);
					check2[t] = toupper(Words[j + 1][t]);
				}
			}
			else
			{
				for (int t = 0; t < st_number; ++t)
				{
					check1[t] = Words[j][t];
					check2[t] = Words[j+1][t]; 
				}
			}

			if (strcmp(check1, check2) > 0)
			{
				char n1[35];
				for (int x = 0; x < 30; ++x)
				{
					n1[x] = Words[j][x];
					Words[j][x] = Words[j + 1][x];
					Words[j + 1][x] = n1[x];
				}
			}
		}
	}

	printf("Final String  : ");
	for (int i = 0; i < row + 1; ++i)
		printf("%s ", Words[i]);
	printf("\n");
	free(user_string);
	return 0;
}