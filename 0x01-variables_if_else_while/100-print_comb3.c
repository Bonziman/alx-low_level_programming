#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i, j;
	int count = 0;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (count > 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i + '0');
			putchar(j + '0');
			count++;
		}
	}
	putchar('\n');
	return (0);
}
