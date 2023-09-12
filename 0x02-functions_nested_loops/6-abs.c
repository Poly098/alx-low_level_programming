#include "main.h"

/**
 * _abs - prints absolute value of an integer
 * @r: functioning parameter
 * Return: a or -a
 */

int _abs(int r)
{
	if (r < 0)
		return (-r);
	else if (r >= 0)
	{
		return (r);
	}
	return (0);
}
