#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long long int a = 1, b = 2, c;

	printf("%lld, %lld", a, b);
	int i;

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf(", %lld", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
