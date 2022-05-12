#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main-Entry Point
 *@argc: Argument Count
 *@argv: An array of strings
 *
 *Return: Interger
 */
int main(int argc, char *argv[])
{
	int i, sum, j = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			while (argv[i][j])
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
