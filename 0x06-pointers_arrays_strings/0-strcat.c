#include "main.h"
/**
 * _strcat - a function to concatenate two strings
 *
 * @dest: pointer to the destination variable
 *
 * @src: pointer to the source string
 *
 * Return: pointer to the destination variable
 *
 */
char *_strcat(char *dest, char *src)
{
	char *rslt = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (rslt);
}
