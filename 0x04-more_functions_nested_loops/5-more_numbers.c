#include "main.h"

/**
 * more_numbers - a function that prints numbers
 */
void more_numbers(void)
{
	int a;
	int b;

	while (a <= '9')
	{
		a = '0';

		for (b = '0'; b <= '13'; b++)
		{
			putchar (b);
		}
		putchar ('\n');
		a++;
	}
}
	

