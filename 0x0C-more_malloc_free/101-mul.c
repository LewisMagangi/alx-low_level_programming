#include "main.h"
#include <stdlib.h>

/**
* main - multiplies two positive numbers
* @argc: n arguments
* @argv: args
* Return: int
*/
int main(int argc, char *argv[])
{
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);

	return (0);
}
