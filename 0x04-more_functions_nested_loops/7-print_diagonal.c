#include "main.h"

/**
 *print_diagonal - function that draws a straight line
 *@n: number of line
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i != n)
		{
			int j = 0;

			while (j != i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}

	}
	else
	{
		_putchar('\n');
	}
}
