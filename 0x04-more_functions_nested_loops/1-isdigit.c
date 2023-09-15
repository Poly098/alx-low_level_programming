#include "main.h"

/**
 * _isdigit - function that checks 0 through 9
 * @c: functional parameter
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else if (c >= 'a' && c < = 'z')
		return (0);
}

