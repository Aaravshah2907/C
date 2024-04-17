#include <stdio.h>

/*// Using %p--> pointer location & %x--> hexadecimal location
int main(int argc, char const *argv[])
{
	int a =5;
	int *ptr = &a;
	int *ptr2 = ptr +1;
	printf("%p %p\n", ptr,ptr2);
	printf("%ld\n", sizeof(*ptr));
	return 0;
}*/

int main(int argc, char const *argv[])
{
	struct stud
	{
		int roll;
		char dept_code[25];
		float cgpa;
	} *ptr;

	struct stud class = {25, "B5", 9.2};

	struct Book{
		char Name[25];
		float price;
		char ISBN[30];
	} b, *br;

	ptr = &class;
	printf("%d\n", ptr->roll);
	br = &b;
	// Error: 
	// ptr = &b;
	// br = &class;
	
	return 0;
}