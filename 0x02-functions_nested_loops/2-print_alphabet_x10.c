#include "main.h"
/**
 *print_alphabet_x10 - the function to print letter 'a' to 'z'
 * Reutern: Always 0(success)
 */

void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
