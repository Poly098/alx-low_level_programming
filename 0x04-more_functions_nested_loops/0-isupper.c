#include "main.h"

/**
 * _isupper - displays upper case character
 * @c: functional parameter
 * Return: 1 or 2
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
