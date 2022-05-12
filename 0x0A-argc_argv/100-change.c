#include <stdio.h>
#include <stdlib.h>
/**
 *findchange- A function to find the minimum change needed
 *@i: Interger Input
 *
 *Return: Sum
 */
int findchange(int i)
{
	int sum = 0;

	while (i > 0)
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
	}
	return (sum);
}
/**
 *main-Entry Point
 *@argc: Argument Count
 *@argv: An array of strings
 *
 *Return: Interger
 */
int main(int argc, char *argv[])
{
	int cents, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	sum = findchange(cents);
	printf("%d\n", sum);

	return (0);
}
