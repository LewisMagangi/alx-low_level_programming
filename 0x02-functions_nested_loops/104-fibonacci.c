#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a_hi = 0, a_lo = 1;
	unsigned long int b_hi = 0, b_lo = 2;
	unsigned long int sum_hi, sum_lo;
	unsigned long int limit = 1000000000;
	int count;

	printf("1, 2");

	for (count = 3; count <= 98; count++)
	{
		sum_lo = a_lo + b_lo;
		sum_hi = a_hi + b_hi;

		if (sum_lo >= limit)
		{
			sum_lo -= limit;
			sum_hi++;
		}

		printf(", ");
		if (sum_hi)
			printf("%lu%09lu", sum_hi, sum_lo);
		else
			printf("%lu", sum_lo);

		a_hi = b_hi;
		a_lo = b_lo;
		b_hi = sum_hi;
		b_lo = sum_lo;
	}

	printf("\n");
	return (0);
}
