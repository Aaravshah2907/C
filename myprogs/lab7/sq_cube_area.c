#include <stdio.h>
#include<math.h>
int main()
{
	int n, sq, cube;
	double area;
	printf("Enter value of n: ");
	scanf("%d",&n);
	sq = n*n;
	cube = n*n*n;
	area = M_PI*sq;
	printf("Square: %d\nCube: %d\nArea: %lf\n", sq, cube, area);
}