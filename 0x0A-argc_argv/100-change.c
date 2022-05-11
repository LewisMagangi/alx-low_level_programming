#include <stdio.h>
#include <stdlib.h>
/**
 *main-Entry Point
 *@argc: Argument Count
 *@argv: An array of strings
 *
 *Return: Interger
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	i = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (i < 0)
		printf("0\n");
	else
	{
		while (i >= 25)
		{
			i -= 25;
			sum++;
		}
		while (i >= 10)
		{
			i -= 10;
			sum++;
		}
		while (i >= 5)
		{
			 i -= 5;
			 sum++;
		}
		while (i >= 2)
		{
			i -= 2;
			sum++;
		}
		while (i >= 1)
		{
			i -= 1;
			sum++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
