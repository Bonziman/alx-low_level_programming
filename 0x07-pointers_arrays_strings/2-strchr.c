#include "main.h"
#include <stddef.h>
/**
 * _strchr - function to search for the first occurrence of a character
 * in a string.
 * @s: pointer to the string to be searched
 * @c: character to be searched for in the string
 * Return: adrees of the character in the string if found, NULL if it was not
 * found or if the character is the NULL terminator:
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
