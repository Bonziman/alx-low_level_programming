#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *rslt = dest;

	while (*dest != '\0')
	{
		*dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++
	}
	*dest = '\0';
	return (rslt);
}
