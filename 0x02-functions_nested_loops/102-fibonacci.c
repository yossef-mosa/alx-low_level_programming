#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a = 1, b = 2, c;
	int count = 2;

	printf("%ld, %ld", a, b);
	while (count < 50)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
