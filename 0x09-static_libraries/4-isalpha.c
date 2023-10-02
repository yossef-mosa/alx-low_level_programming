#include "main.h"

/**
 * _isalpha - the function to check if the character is lowercase or uppercase
 *
 * @c: character to check if is lowercase or uppercase
 *
 * Return: 1 for lowercase or uppercase 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
