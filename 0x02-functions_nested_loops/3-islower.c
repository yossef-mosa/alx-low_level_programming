#include "main.h"

/**
 * _islower - the function to check the lowercase character
 *
 * @c:character to check if it islowercase
 *
 * Return: 1 to lowercases and 0 to otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
