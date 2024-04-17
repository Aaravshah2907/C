#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int size=0, sum=0;
	printf("Enter size of arrays: ");
	scanf("%d", &size);

	int *arr1 = (int *)malloc(size*sizeof(int));
	int *arr2 = (int *)malloc(size*sizeof(int));

	printf("Enter elements for array 1: \n");
	for (int i = 0; i < size; ++i)
		scanf("%d", arr1+i);

	printf("Enter elements for array 2: \n");
	for (int i = 0; i < size; ++i)
		scanf("%d", arr2+i);

	for (int i = 0; i < size; ++i)
		sum += (arr1[i] * arr2[i]);

	printf("Dot Product: %d\n", sum);
	free(arr1);
	free(arr2);
	return 0;
}