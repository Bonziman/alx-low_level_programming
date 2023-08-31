#include "main.h"
int str_len(const char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + str_len(s + 1);
		return (i += 1);
	}
	return (0);
}
int ispldrm(int i, char *s)
{
	if (*s)
	{
		if (*s != s[str_len(s - i)])
		{
			return (0);
		}
		return (ispldrm(i + 1, s + 1));
	}
	return (1);
}
int is_palindrome(char *s)
{
	int i = 1;

	return (ispldrm(i, s));
}
