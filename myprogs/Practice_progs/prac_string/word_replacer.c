#include <stdio.h>
#include <string.h>

void pop_char_from_string(char *str, int length)
{
	for (int i = 0; i < length - 1; ++i)
	{
		str[i] = str[i+1];
	}
}

int main(int argc, char const *argv[])
{
	char user_string[50], replace_word_from[25], replace_word_to[25];
	int repeat_counter, len_replace_word;
	printf("Enter string :");
	scanf("%s", user_string);
	printf("Enter relace word from: ");
	scanf("%s", replace_word_from);
	printf("Enter relace word to: ");
	scanf("%s", replace_word_to);

	len_replace_word = strlen(replace_word_to);
	for (;strstr(user_string, replace_word_from);)
	{
		char *ptr, char_to_add;
		ptr = strstr(user_string, replace_word_from);
		int pptr = ptr - user_string;
		int len = strlen(user_string);
		for (; pptr < strlen(user_string); ++pptr)
		{
			char_to_add = *ptr;
			*ptr = replace_word_to[0];
			pop_char_from_string(replace_word_to, len_replace_word);
			replace_word_to[len_replace_word - 1] = char_to_add;
		}
	}

	printf("\nReplaced String: %s\n", user_string);
	return 0;
}