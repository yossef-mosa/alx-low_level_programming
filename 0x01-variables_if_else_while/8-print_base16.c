#include <stdio.h>
/**
  *main - this is the main function for the task
  *Return: 0
  */
int main(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
putchar('0' + i);
for (i = 'a' ; i <= 'f' ; i++)
putchar(i);
putchar('\n');
return (0);
}
