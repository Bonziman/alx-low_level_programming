#include "main.h"
/**
 * _strspn - function to geth the length of matching character of 2 strings
 *
 * @s: target string to be measured
 * @accept: string cointaining characters to be matched
 * Return: len which is the length of matching characters
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (len);
}
