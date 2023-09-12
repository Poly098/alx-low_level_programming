#include "main.h"

/**
 * print_last_digit - prints last digit
 * @d: performing function
 * Return: e
 */

int print_last_digit(int d)
{
	int e;

	e = d % 10;
	if (d < 0)
		e = -e;
	_putchar(e + '0');
	return (e);
}
