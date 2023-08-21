#include "main.h"
/**
 * rev_string - function to reverse a string
 *
 * @s: string pointer
 *
 */

void rev_string(char *s)
{
	int len;
	int first;
	int last;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	first = 0;
	last = len - 1;

	while (first < last)
	{
		tmp = s[first];
		s[first] = s[last];
		s[last] = tmp;
		last--;
		first++;
	}
}
