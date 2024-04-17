#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	void **pointer_var;
	pointer_var = (void **)malloc(2 * sizeof(void *));

	int arr[atoi(argv[1])];
	float fl_arr[atoi(argv[1])];
	*pointer_var = (int *)arr;
	*(pointer_var + 1) = ((float *)fl_arr);

	printf("Enter Integer Values: \n");
	for (int i = 0; i < atoi(argv[1]); ++i)
		scanf("%d", arr + i);

	printf("Enter Float Values: \n");
	for (int i = 0; i < atoi(argv[1]); ++i)
		scanf("%f", fl_arr + i);

	printf("Integer Array: ");
	for (int i = 0; i < atoi(argv[1]); ++i)
		printf("%d ", *((int *)(*(pointer_var))+i));
	printf("\n");

	printf("Float Array: ");
	for (int i = 0; i < atoi(argv[1]); ++i)
		printf("%f ", *((float *)(*(pointer_var + 1))+i));
	printf("\n");
	
	free(pointer_var);
	return 0;
}