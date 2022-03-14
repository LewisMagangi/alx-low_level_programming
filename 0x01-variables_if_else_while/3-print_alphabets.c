#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
int b;

for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
for (b = 'A'; b <= 'Z'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
