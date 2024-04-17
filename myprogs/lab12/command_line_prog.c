#include <stdio.h>

int main(int argc, char const *argv[])
{
	if (argc == 2)
		printf("The arguement supplied is %s\n",argv[1] );
	else if(argc > 2)
		printf("Too many arguements\n");
	else
		printf("One more arguement expected\n");
	return 0;
}