// "linearsearchR2L.c"
#include "search.h"
// this function searches for ele in arr from right to left
int search(int arr[], int size, int ele)
{
	for(int i=size-1; i >= 0; i--)
		if(arr[i]==ele)
			return i+1;
	return -1;
}