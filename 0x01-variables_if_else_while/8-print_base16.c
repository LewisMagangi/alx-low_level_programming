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
char c;

for (a = '0'; a <= '9'; a++)
putchar(a);
for (c = 'a'; c <= 'g'; c++)
{
if (c < 'g')
{
putchar(c);
}
else if (c == 'g')
{
putchar('\n');
}
}
return (0);
}
