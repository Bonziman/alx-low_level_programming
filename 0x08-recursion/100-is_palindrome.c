#include "main.h"
/**
 * str_len - function that counts the length of a string
 * @s: the string
 * Return: the length of the rtring
 */
int str_len(const char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + str_len(s + 1);
		return (i += 1);
	}
	return (0);
}
/**
 * ispldrm - function to check if string is palindrome or not
 * @i: a number
 * @s: string
 * Return: many values
 */
int ispldrm(int i, char *s)
{
	if (*s)
	{
		if (*s != s[str_len(s - i)])
		{
			return (0);
		}
		return (ispldrm(i + 1, s + 1));
	}
	return (1);
}
/**
 * is_palindrome - function to check if a string is a palindrome
 * @s: the string
 * Return: 1 if it is, 0 if it's not palindrome
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (ispldrm(i, s));
}
