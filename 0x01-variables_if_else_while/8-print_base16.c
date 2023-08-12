#include <stdio.h>

/**
 * main - the programs entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	char num, lett;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');

	for (lett = 'a'; lett <= 'f'; lett++)
		putchar(lett);

	putchar('\n');
	return (0);
}
