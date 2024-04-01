// "linearsearch.c"
#include "search.h"
// this function searches for ele in arr and returns its position (index +1) or returns-1 if not found

int search(int arr[], int size, int ele)
{
	for(int i=0;i < size; i++)
		if(arr[i]==ele)
			return i+1;
	return -1;
}