#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// void pop_char_from_string(char *str, int length)
// {
// 	for (int i = 0; i < length - 1; ++i)
// 	{
// 		str[i] = str[i+1];
// 	}
// }

// int main(int argc, char const *argv[])
// {
// 	char user_string[50], replace_word_from[25], replace_word_to[25];
// 	int repeat_counter, len_replace_word;
// 	printf("Enter string :");
// 	scanf("%s", user_string);
// 	printf("Enter relace word from: ");
// 	scanf("%s", replace_word_from);
// 	printf("Enter relace word to: ");
// 	scanf("%s", replace_word_to);

// 	len_replace_word = strlen(replace_word_to);
// 	for (;strstr(user_string, replace_word_from);)
// 	{
// 		char *ptr, char_to_add;
// 		ptr = strstr(user_string, replace_word_from);
// 		int pptr = ptr - user_string;
// 		int len = strlen(user_string);
// 		for (; pptr < strlen(user_string); ++pptr)
// 		{
// 			char_to_add = *ptr;
// 			*ptr = replace_word_to[0];
// 			pop_char_from_string(replace_word_to, len_replace_word);
// 			replace_word_to[len_replace_word - 1] = char_to_add;
// 		}
// 	}

// 	printf("\nReplaced String: %s\n", user_string);
// 	return 0;
//}

// // Without creation of new string.
// void replace_word(char *str, char *old_word, char *new_word)
// {
// 	int old_len = strlen(old_word);
// 	int new_len = strlen(new_word);
// 	char *pos;

// 	while ((pos = strstr(str, old_word)) != NULL)
// 	{
// 		// Check if new word fits without overflowing
// 		if (new_len > old_len && (pos - str + new_len) > strlen(str))
// 		{
// 			printf("Error: Replacement string overflows\n");
// 			return;
// 		}

// 		// Shift remaining string to make space for replacement
// 		memmove(pos + new_len, pos + old_len, strlen(pos + old_len) + 1);

// 		// Copy the new word
// 		strncpy(pos, new_word, new_len);

// 		str = pos + new_len; // Update starting point for next iteration
// 	}
// }

// int main()
// {
// 	char str[] = "This is a test string";
// 	char old_word[] = "test";
// 	char new_word[] = "replaced";

// 	replace_word(str, old_word, new_word);
// 	printf("Replaced string: %s\n", str);

// 	return 0;
// }

// New String Creation
char *replace_word_new(char *str, char *old_word, char *new_word)
{
	int old_len = strlen(old_word);
	int new_len = strlen(new_word);
	char *temp, *ptr;
	int count = 0, total_len = 0;

	// Count occurrences of old word
	temp = str;
	while ((temp = strstr(temp, old_word)) != NULL)
	{
		count++;
		temp += old_len;
	}

	// Calculate total length of new string (including spaces)
	total_len = strlen(str) + count * (new_len - old_len);

	// Allocate memory for new string
	ptr = (char *)malloc(total_len + 1);
	if (ptr == NULL)
	{
		printf("Memory allocation error\n");
		return NULL;
	}

	temp = str;
	ptr[0] = '\0'; // Initialize new string

	while (*temp)
	{
		if (strncmp(temp, old_word, old_len) == 0)
		{
			strcat(ptr, new_word);
			temp += old_len;
		}
		else
		{
			strncat(ptr, temp, 1);
			temp++;
		}
	}

	return ptr;
}

int main()
{
	char str[] = "This is a test string";
	char old_word[] = "test";
	char new_word[] = "replaced";

	char *new_str = replace_word_new(str, old_word, new_word);
	if (new_str == NULL)
	{
		return 1;
	}

	printf("Replaced string: %s\n", new_str);
	free(new_str); // Free allocated memory

	return 0;
}
