#include <stdio.h>
/**
  * main - this is the main function for the task
  *Return: Always 0 (Success)
  */
int main(void)
{
int i = 0;
int j = 0;
for (i = 0 ; i < 10 ; i++)
for (j = i + 1 ; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
if (i != 8)
putchar(',');
putchar(' ');
}
return (0);
}
