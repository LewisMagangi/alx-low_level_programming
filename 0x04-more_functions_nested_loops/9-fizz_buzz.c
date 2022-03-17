#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of intended no
 * 5 multiples print Buzz instead of intended no
 * 3 & 5 multiples print Fizz Buzz instead of intended no
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s ", b);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if ((i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
