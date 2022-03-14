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

for (a = 'a'; a <= 'z'; a++)
{
if (a == 'e')
a++;
else if (a == 'q')
a++;
putchar(a);
}
putchar('\n');
return (0);
}
