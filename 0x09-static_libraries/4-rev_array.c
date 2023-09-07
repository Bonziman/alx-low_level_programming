#include "main.h"
/**
 * reverse_array - function to reverse int array.
 *
 * @a: pointer to the array.
 *
 * @n: number of elements to reverse.
 *
 * Return: void (no return).
 */
void reverse_array(int *a, int n)
{
	int i, temp, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

}
