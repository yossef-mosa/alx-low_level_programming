#include "variadic_functions.h"

/**
 * sum_them_all -  function that returns the sum of all its parameters
 *
 * @n: number of arguments
 *
 * Return: 0 if n == 0, else result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	int count, num, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(number, n);

	num = n;

	for (count = 0; count < num; count++)
	{
		sum += va_arg(number, int);

	}
	va_end(number);
	return (sum);

}
