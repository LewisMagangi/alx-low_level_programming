#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a1 = 1, b1 = 2;
	unsigned long int a2 = 0, b2 = 0;
	unsigned long int sum1, sum2;
	unsigned long int limit = 1000000000;
	int count;

	printf("1, 2");

	for (count = 3; count <= 98; count++)
	{
		sum2 = a2 + b2;
		sum1 = a1 + b1 + (sum2 >= limit);
		sum2 %= limit;

		printf(", ");
		if (sum1)
			printf("%lu%09lu", sum1, sum2);
		else
			printf("%lu", sum2);

		a1 = b1;
		a2 = b2;
		b1 = sum1;
		b2 = sum2;
	}

	printf("\n");
	return (0);
}
