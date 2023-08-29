#include "main.h"
/**
 * _memset - function that fills a memory with a constant byte
 *
 * @s: target string
 *
 * @b: the source string or char
 *
 * @n: the number of times the function should be done
 *
 * Return: p which is a pointer to the target string
 */
char *_memset(char *s, char  b, unsigned int n)
{
	unsigned char *bytptr = (unsigned char *)s;
	unsigned char bytvl = (unsigned char)b;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*bytptr = bytvl;
		bytptr++;
	}
	return (s);
}
