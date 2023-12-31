#include "main.h"
/**
 * _strncat - a function that concatenates two strings n number
 *
 *  @dest: the pointer to the destination string variable
 *
 *  @src: pointer to the source sstring variable
 *
 *  @n: the number of elements to be concatenated
 *
 *  Return: always the pointer result which points to the destination var
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *rslt = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (rslt);
}
