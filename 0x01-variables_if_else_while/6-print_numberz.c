#include <stdio.h>

/**
 * main - the programs entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	int num;

	for (num = 0; num  < 10; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
