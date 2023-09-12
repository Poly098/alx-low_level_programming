#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers
 * @n: functional parameter
 * Return: void
 */

void print_to_98(int n)
{
	int j;

	if (n >= 0 && n <= 98)
	{
		for (j = 0 ; j <= 98 ; j++)
		{
			printf("%d", n);
			if (j != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		for (j = 0 ; j >= 98 ; j--)
		{
			printf("%d", n);
			if (j != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (j = 0 ; j <= 98 ; j++)
		{
			printf("%d", n);
			if (j != 98)
				printf(", ");
		}
	}
}
