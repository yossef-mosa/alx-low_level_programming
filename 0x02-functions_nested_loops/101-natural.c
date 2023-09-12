#include <stdio.h>
/**
 * main - the main function to print the sum
 * Return: 0
 */
int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
		i++;
	}
	print("%d", j);
	return (0);
}
