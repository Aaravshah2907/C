**Important Character Functions:**
isdigit(c) --> Returns 0 if not a digit
islower(c) --> Returns 0 if not a lower case letter
isupper(c) --> Returns 0 if not a upper case letter
isspace(c) --> Returns 0 if not a space
isalpha(c) --> Returns 0 if not an alphabet

toupper(c) --> Converts the given string into upper case
tolower(c) --> Converts the given string into lower case



**Important String Functions:**
strcpy(s1, s2)		--> Copies s2 into s1
strcat(s1, s2)		--> Concatenates s2 to s1
strlen(s1)			--> Returns length of s1
strcmp(s1, s2)		--> 	{=0; 	s1 = s2}
							{>0; 	s1 > s2}
							{<0; 	s1 < s2}


atof(s1)			--> ASCII string -> floating-point equivalent : double
atoi(s1)			--> ASCII string -> integer equivalent : int
strncat(s1, s2, n)	--> Same like strcat but only up to n characters
strncmp(s1, s2, n)	--> Same like strcmp but only up to n characters
strncpy(s1, s2, n)	--> Same like strcpy but only up to n characters
strstr(s1, s2)		--> Tests whether a substring is present in a larger string. 
					--> {0: if s2 not in s1}
					--> {pointer: first occurence of s2 in s1}


