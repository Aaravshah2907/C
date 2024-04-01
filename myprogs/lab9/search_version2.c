include <stdio.h>
int main()
{
	int arr1[10] = {3,24,32,74,28,9,5,1,6,11};
	int x = 32; // element to be searched
	int foundFlag = 0;
	int arrSize = sizeof(arr1) / sizeof(arr1[0]);

	for(int i=0; i<arrSize; i++)
	{
		if(arr1[i]==x)
		{
			printf("The element x is found in arr1 at position %d\n",i+1);
			foundFlag = 1;
			break;
		}
	}

	if(foundFlag ==0) 
		printf("The element x is not found in arr1\n");
	
	foundFlag = 0;
	int arr2[10] = {32,2,3,7,2,99,57,17,65,10};
	int y = 17; // element to be searched
	arrSize = sizeof(arr2) / sizeof(arr2[0]);

	for(int i=0; i<arrSize; i++)
	{
		if(arr2[i]==y)
		{
			printf("The element y is found in arr2 at position %d\n",i+1);
			foundFlag = 1;
			break;
		}
	}
	if(foundFlag ==0) printf("The element y is not found in arr2\n");
	return 0;
}