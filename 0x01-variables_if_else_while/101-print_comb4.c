#include <stdio.h>
/**
  * main - this is the main function for the task
  *Return: Always 0 (Success)
  */
int main(void)
{
int i = 0;
int j = 0;
int k = 0;
for (i = 0 ; i < 10 ; i++)
for (j = i + 1 ; j < 10; j++)
for (k = j + 1 ; k < 10; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
