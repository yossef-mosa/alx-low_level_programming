#include "main.h"
/**
 *print_alphabet - the function to print letter 'a' to 'z'
 * Reutern: Always 0(success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
