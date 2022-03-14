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
int c;

for (c = 97; c <= 122; c++)
{
putchar(c);
if (c == 122)
putchar('\n');
}
return (0);
}

