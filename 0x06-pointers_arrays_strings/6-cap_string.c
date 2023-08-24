#include "main.h"
/**
 * cap_string - a function to capitalize words in a character string seperated 
 * by spesific special characters.
 *
 * @str: pointer to the target string
 *
 * Return: pointer to the target string
 *
 */

char *cap_string(char *str)
{
	char *rslt = str;

	if (*str >= 97 && *str <= 122)
	{
		*str -= 32;
	}
	while (*str != '\0')
	{
		if (*(str - 1) == 32 || *(str - 1) == 9 || *(str - 1) == 10 ||
		*(str - 1) == 44 || *(str - 1) == 59 || *(str - 1) == 46 || 
		*(str - 1) == 33 || *(str - 1) == 63 || *(str - 1) == 34 ||
		*(str - 1) == 40 || *(str - 1) == 41 || *(str - 1) == 123 ||
		*(str - 1) == 125)
		{
			if (*str != '\0' && *str >= 97 && *str <= 122)
				*str -= 32;
		}
		str++;
	}
	return (rslt);
}
