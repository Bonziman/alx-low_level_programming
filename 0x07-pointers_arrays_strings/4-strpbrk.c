#include "main.h"
/**
 * _strpbrk - function that finds the first character in the string that
 * matches any characters specified in another string
 *
 * @s: the string to be scanned.
 * @accept: string that contains the characters to be matched.
 * Return: rslt which points to the byte in s string, of the character that
 * matched.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				char *rslt = &s[i];

				return (rslt);
			}
		}
	}
	return (0);
}
