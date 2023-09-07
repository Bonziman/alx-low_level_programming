#include "main.h"

/**
 * _strcpy - function similar to strcpy, to copy strings
 *
 * @src: pointer to the string we will be copying
 *
 * @dest: pointer to the string where wi will copy
 *
 * Return: return a pointer to the dest string
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *org = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (org);
}
