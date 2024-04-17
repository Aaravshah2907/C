#include <stdio.h>
#include <stdlib.h>
/*
void swap(int* array, int array_size)
{
	int temp = *array;
	*array = *(array+array_size-1);
	*(array+array_size-1) = temp; 
}

int main(int argc, char const *argv[])
{
	int array_size;
	printf("Enter Array Size: ");
	scanf("%d", &array_size);
	int *array = (int *)malloc(array_size*sizeof(int));
	for(int i=0;i<array_size;i++)
	{
		printf("Enter element at index %d: ",i);
		scanf("%d",array+i);
	}	
	printf("Array: ");
	for (int i = 0; i < array_size; ++i)
	{
		printf(" %d", *(array+i));
	}
	printf("\n");
	swap(array, array_size);	
	printf("Array: ");
	for (int i = 0; i < array_size; ++i)
	{
		printf(" %d", *(array+i));
	}
	printf("\n");
	free(array);
	return 0;
}*/

void fun2(int *arr, int size)
{
	int temp = *arr;
	*(arr) = *(arr+size-1);
	*(arr+size-1) = temp;
}

int main(int argc, char const *argv[])
{
	int size;
	printf("Enter size: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter Array Elemnents: \n");
	for (int i = 0; i < size; ++i)
	{
		scanf("%d", arr+i);
	}
	printf("Array: ");
	for (int i = 0; i < size; ++i)
	{
		printf(" %d", *(arr+i));
	}
	printf("\n");
	fun2(arr,size);
	printf("Array: ");
	for (int i = 0; i < size; ++i)
	{
		printf(" %d", *(arr+i));
	}
	printf("\n");
	return 0;
}