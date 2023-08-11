#include <stdio.h>

/**
 * main - this is the entry point of the program
 *
 * alphabet - this is the variable that has the a to z
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	char alpha, alphaUP;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (alphaUP = 'A'; alphaUP <= 'Z'; alphaUP++)
	{
		putchar(alphaUP);
	}
	putchar('\n');
	return (0);
}
