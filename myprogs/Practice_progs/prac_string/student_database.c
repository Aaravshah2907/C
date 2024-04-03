#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int st_number;
	printf("Enter number of students: \n");
	scanf("%d",&st_number);
	char ID[st_number][15], Name[st_number][30];
	int Marks[st_number];

	for (int i = 0; i < st_number; ++i)
	{
		char id_temp[15] ,name_temp[30];
		printf("Enter Id :");
		for(int j= 0; j<15; j++)
			scanf(" %c", &id_temp[j]);
		for (int x = 0; x < 15; ++x){
			id_temp[x] = ID[i][x];
			printf("%c",&ID[i][x] );
		}

		printf("Enter Id: ");
		scanf("%s", name_temp);
		for (int x = 0; x < 30; ++x)
			name_temp[x] = Name[i][x];

		printf("Enter Marks: ");
		scanf("%d", &Marks[i]);
	}

	for (int i = 0; i < st_number; ++i)
	{
		for (int j = 0; j < st_number - i; ++j)
		{
			if(strcmp(Name[j], Name[j+1]) > 0)
			{
				// Marks Swap
				int temp = Marks[j];
				Marks[j] = Marks[j+1];
				Marks[j+1] = temp;

				// Name Swap
				char n1[30];
				for (int x = 0; x < 30; ++x)
					n1[x] = Name[j][x];
				for (int x = 0; x < 30; ++x)
					Name[j][x] = Name[j+1][x];
				for (int x = 0; x < 30; ++x)
					Name[j][x] = n1[x];

				// ID swap
				char id_temp[15];
				for (int x = 0; x < 15; ++x)
					id_temp[x] = ID[j][x];
				for (int x = 0; x < 15; ++x)
					ID[j][x] = ID[j+1][x];
				for (int x = 0; x < 15; ++x)
					ID[j][x] = id_temp[x];
			}
		}
	}

	for (int i = 0; i < st_number; ++i)
		printf("ID: %s  Name: %s Marks:%d\n", ID[i], Name[i], Marks[i]);
	return 0;
}