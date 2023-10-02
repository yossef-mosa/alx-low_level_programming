#include <stdio.h>

/**
 * main - function print name of program
 *
 * @argc: argument counter
 * @argv: pointer to array of arguments
 *
 * Return: 0(succes)
 */

int main(int argc, char *argv[])
{
		if (argc > 0)
					printf("%s\n", argv[0]);

			return (0);
}
