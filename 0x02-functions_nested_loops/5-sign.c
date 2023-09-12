#include "main.h"

/**
 * print_sign-function to print sing of number
 *
 * @n: the number
 *
 *Return: 0  1  -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
		_putchar('-');
	return (-1);
}
