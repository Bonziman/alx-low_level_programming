#include "main.h"
/**
 * string_toupper - function that converts all lowercase letters to uppercase.
 *
 * @str: the pointer to the string to be converted.
 *
 * Return: return the pointer to the string.
 *
 */
char *string_toupper(char *str)
{
	char *rslt = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (rslt);

}
