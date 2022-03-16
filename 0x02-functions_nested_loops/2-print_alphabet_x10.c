#include <unistd.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
int a;
int b;

b = 0;

	while (b <=10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
		putchar(a);
		}
	putchar('\n');
	}
return (0);
}

