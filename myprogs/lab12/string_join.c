#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int counter, len=0;
	char *s1 = (char *)malloc(100*sizeof(char));
	char *s2 = (char *)malloc(100*sizeof(char));
	char *s3 = (char *)malloc(200*sizeof(char));
	printf("S1 = ");
	scanf("%s",s1);
	printf("S2 = ");
	scanf("%s",s2);

	for(int i=0; s1[i] != '\0' && s2[i] != '\0'; ++i)
	{
		if(tolower(s1[i])-tolower(s2[i]) < 0)
		{
			counter = 1;
			break;
		}
		else if(tolower(s1[i])-tolower(s2[i]) > 0)
		{
			counter = 2;
			break;
		}
		else
			counter = 0;	
	}

	switch(counter)
	{
		case 0:		for (; s1[len] != '\0'; ++len)
						s3[len] = s1[len];
						break;
		case 1: 	for (; s1[len] != '\0' ; ++len)
						s3[len] = s1[len];
					s3[len++] = ' ';
					for (int i = 0; i < s2[i] !=0; ++i, ++len)
						s3[len] = s2[i];
					break;
		case 2: 	for (; s2[len] != '\0' ; ++len)
						s3[len] = s2[len];
					s3[len++] = ' ';
					for (int i = 0; i < s1[i] !=0; ++i, ++len)
						s3[len] = s1[i];
	}

	printf("S3 = %s\n", s3);
	free(s1);
	free(s2);
	free(s3);
	return 0;
}