#include <stdio.h>
/**
  *main - this is main function for the task
  *Rutern: 0
  */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar('0' + i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
