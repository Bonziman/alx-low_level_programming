#include "main.h"
#include <stdio.h>
/**
 * print_array - funtion to print n number of array elements
 *
 * @a: array pointer
 *
 * @n: number n
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
