#include <stdio.h>
/**
  * main - this is the main function for the task
  *Return: Always 0 (Success)
  */
int main(void)
{
int i = 0;
int j = 0;
for (i = 0 ; i < 100 ; i++)
for (j = i  ; j < 100 ; j++)
{
putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(' ');
putchar('0' + j / 10);
putchar('0' + j % 10);
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
