#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;

for (a = '0'; a <= '9'; a++)
{
putchar(a);
if (a != '9')
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}


