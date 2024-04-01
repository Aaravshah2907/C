#include <stdio.h>
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
if(foundFlag ==0) printf("The element x is not found in arr1\n");
return 0;
}