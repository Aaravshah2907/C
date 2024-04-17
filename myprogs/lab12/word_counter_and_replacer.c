#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char *user_string, replace_word_from[25];
	user_string = (char *)malloc(100* sizeof(char));
	int repeat_counter=0;
	printf("Enter string: ");
	scanf("%[^\n]s", user_string);
	printf("Enter replace word from: ");
	scanf("%s", replace_word_from);
	int rem_length = strlen(replace_word_from);
	char *ptr = strstr(user_string, replace_word_from);

	while(ptr)
	{
		repeat_counter++;
		int pptr = ptr - user_string, len = strlen(user_string);
		for (int i = 0; i < rem_length; ++i)
			for (int j = 0; j <= len - pptr ; ++j)
				user_string[pptr+j] = user_string[pptr+j+1];
		if(user_string[pptr] == ' ')
			for(int j=0; j<=len -pptr; j++)
				user_string[pptr+j] = user_string[pptr+j+1];
		ptr = strstr(ptr, replace_word_from);
		
	}

	printf("Counter: %d\nReplaced String: %s\n",repeat_counter,user_string);
	free(user_string);
	return 0;
}
