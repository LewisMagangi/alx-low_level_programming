#include <stdio.h>
#include <stdarg.h>

/**
  *print_numbers-a function that prints numbers, followed by a new line.
  *@separator: a constsnt character.
  *@n: A constant unsigned interger.
  *
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);

	putchar('\n');
}
