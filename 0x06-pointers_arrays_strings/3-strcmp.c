#include "main.h"
/**
 * _strcmp - a function to compare two strings.
 *
 * @s1: first string to be compared.
 *
 * @s2: second string to be compared.
 *
 * Return: rslt which is the variable that contains the result of the function.
 *
 */
int _strcmp(char *s1, char *s2)
{
	int rslt;


	while (*s1 - *s2 == 0 && *s1 != '\0')
	{
		rslt = 0;
		s1++;
		s2++;
	}
	if (*s1 - *s2 > 0)
	{
		rslt = *s1 - *s2;
	}
	else if (*s1 - *s2 < 0)
	{
		rslt = *s1 - *s2;
	}
	return (rslt);
}
