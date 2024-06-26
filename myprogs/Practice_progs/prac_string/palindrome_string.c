#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char string[150];
	int left, right, i = 0;
	printf("Enter a string: ");
	for (; (string[i] = getchar())!= '\n'; ++i);
	int len = i-1;

	for (left =0, right = len; left <= right; ++left, --right)
		if (string[left] != string[right])
		{
			printf("String is not a palindrome\n");
			break;
		}

	printf("String is palindrome\n");
	return 0;
}