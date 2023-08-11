#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char num;

	for (num = 'z'; num >= 'a'; num--)
		putchar(num);
	putchar('\n');
	return (0);
}
