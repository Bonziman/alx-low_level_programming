#include "main.h"

/**
 * _strstr - function to scan a string to find another string
 * @haystack: string to be scaned
 * @needle: the string we're looking for
 * Return: adress of first byte of the needle in haystac or null terminator
 * in case the string was not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			char *rslt = &haystack[i];

			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return  (rslt);
			}
		}
	}
	return ('\0');
}
