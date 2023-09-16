#include <unistd.h>
#include "main.h"

/**
 * print_numbers - print numbers from 0 through 9
 * @i: main parameter
 * Return: void
 */

void print_numbers(void)
{
	int i;
	char _putchar();

	for (i = 0 ; i <= 9 ; i++)
		_putchar(i + '0');
	_putchar('\n');
}
