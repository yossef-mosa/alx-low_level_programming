#include "main.h"

/**
 * _pow_recursion - function that returns power of number
 *
 * @x: number
 * @y: power number
 *
 * Return: power of a number, -1 if power number  less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (x == 0)
	{
		return (0);
	}

	else if (x == 1 || y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
