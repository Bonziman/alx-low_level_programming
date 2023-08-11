#include <stdio.h>

/**
 * main - the program's entry point
 *
 * Return: always 0
 *
 * this program prints all the single digit numbers of base 10 starting from 0
 *
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
