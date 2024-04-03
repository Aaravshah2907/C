#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int st_number, dec;
	printf("Sort Options:\n1. Name Sort\n2. ID Sort\n3. Marks Sort\nSort via: ");
	scanf("%d", &dec);
	printf("Enter number of students: ");
	scanf("%d", &st_number);
	char ID[st_number][15], Name[st_number][30];
	int Marks[st_number];

	for (int i = 0; i < st_number; ++i)
	{
		char id_temp[15], name_temp[30];
		printf("Enter Id:    ");
		scanf("%s", id_temp);
		int len = strlen(id_temp);
		int j = 0;
		for (; j < len && (isalpha(id_temp[j]) || isdigit(id_temp[j])); j++)
			ID[i][j] = id_temp[j];
		ID[i][j] = '\0';

		printf("Enter Name:  ");
		scanf("%s", name_temp);
		for (int x = 0; x < 30; ++x)
			Name[i][x] = name_temp[x];

		printf("Enter Marks: ");
		scanf("%d", &Marks[i]);
	}

	// For sorting on basis of name
	for (int i = 1; i <= st_number; ++i)
	{
		for (int j = 0; j < st_number - i; ++j)
		{
			char check1[30], check2[30];

			if (dec == 1)
			{
				for (int t = 0; t < 30; t++)
				{
					check1[t] = toupper(Name[j][t]);
					check2[t] = toupper(Name[j + 1][t]);
				}
			}

			else if (dec == 2)
			{
				for (int t = 0; t < 30; t++)
				{
					check1[t] = ID[j][t];
					check2[t] = ID[j + 1][t];
				}
			}
			else if (dec == 3)
			{
				check1[0] = Marks[j];
				check2[0] = Marks[j + 1];
			}

			if (strcmp(check1, check2) > 0)
			{
				// Marks Swap
				int temp = Marks[j];
				Marks[j] = Marks[j + 1];
				Marks[j + 1] = temp;

				// Name Swap
				char n1[30];
				for (int x = 0; x < 30; ++x)
					n1[x] = Name[j][x];
				for (int x = 0; x < 30; ++x)
					Name[j][x] = Name[j + 1][x];
				for (int x = 0; x < 30; ++x)
					Name[j + 1][x] = n1[x];

				// ID swap
				char id_temp[15];
				for (int x = 0; x < 15; ++x)
					id_temp[x] = ID[j][x];
				for (int x = 0; x < 15; ++x)
					ID[j][x] = ID[j + 1][x];
				for (int x = 0; x < 15; ++x)
					ID[j + 1][x] = id_temp[x];
			}
		}
	}

	for (int i = 0; i < st_number; ++i)
		printf("%d.\n\tID: %s\n\tName: %s\n\tMarks:%d\n", i + 1, ID[i], Name[i], Marks[i]);
	return 0;
}