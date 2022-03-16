#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char s[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i;

for (i = 0; i <= 7; i++)
	{
	putchar(s[i]);
	}
putchar('\n');
return (0);
}
