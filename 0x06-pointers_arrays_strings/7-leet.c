#include "main.h"
/**
 * leet - function to encode a string in 1337
 *
 * @str: pointer to string to be encoded.
 *
 * Return: str which is the encoded string.
 *
 */
char *leet(char *str)
{
	char *new = "4433007711";
	char *old = "aAeEoOtTlL";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; j < 10; j++)
		{
			if (str[i] == old[j])
			{
				str[j] = new[j];
			}
		}
	}
	return (str);
}

