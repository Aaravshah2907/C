#include <stdio.h>

// To use an array of pointers as strings only. Pointers instead of pointing at a value of a variable can be used to point directly at constant values.
// int main(int argc, char const *argv[])
// {
// 	char *cityPtr[] = {"Chennai", "Kolkata", "Mumbai", "New Delhi"};
// 	for (int i = 0; i < 4; ++i)
// 		printf("cityPtr[%d] = %s\n",i, cityPtr[i]);
// 	return 0;
// }

int main(int argc, char const *argv[])
{
	char name[5][30];
	printf("Enter 5 strings\n");
	for (int i = 0; i < 5; ++i)
		scanf("%s", name[i]);

	for (int i = 0; i < 5; ++i)
		printf("%s\n", name[i]);

	return 0;
}