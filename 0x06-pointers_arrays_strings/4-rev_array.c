#include "main.h"

/**
 * reverse_array - reverse contents of array
 * @n: number of bytes
 * @a: reversed parameter
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int i;
	int j;

	for (i = 0 ; i > n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
