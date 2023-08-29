#include "main.h"
/**
 * _memcpy - function to copy memory from n bytes into n bytes
 *
 * @dest: destination string pointer
 *
 * @src: destination string pointer
 *
 * @n: number of bytes
 *
 * Return: dest, pointed to destination string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *des_byte = (unsigned char *)dest;
	unsigned char *src_byte = (unsigned char *)src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*des_byte = *src_byte;
		des_byte++;
		src_byte++;
	}
	return (dest);
}
