/*
Q1
*/
#include<stdio.h>
void func(int a,int b);

int main(void)
{
	int x;
	x=func(2,3);
	return 0;
}

void func(int a,int b)
{
	int s;
	s=a+b;
	return;
}
/*
Q2
*/
#include<stdio.h>
int diff(int x,int y){
return x-y; }
int sum(int x,int y){
return x+y; }
int main(void){
int a=20, b=5, c=2, d=6;
printf("%d\t", a + diff(d,c));
printf("%d\n", diff(a,sum(diff(b,c),d)));
return 0;
}
/*
Q3
*/
#include <stdio.h>
void func(void);
int main(void){
int i=5;
for(i=i+1; i<8; i++)
func();
}
void func(void){
int j;
for(j=1; j<3; j++)
printf("%d\t",++j);
}