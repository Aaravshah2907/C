#include <stdio.h>
int main(int argc, char const *argv[])
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	int *ptr = arr;
	printf("%d\n", *++ptr);
	ptr = arr;
	printf("%d\n", ++*ptr);
	ptr = arr;
	printf("%d\n", *(ptr++));
	ptr = arr;
	printf("%d\n", (*ptr)++);
	for (int i = 0; i < 10; ++i)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}