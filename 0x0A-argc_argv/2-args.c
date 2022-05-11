#include <stdio.h>

/**
 *main-Entry Point
 *@argc: Argument Count
 *@argv: An array of strings
 *
 *Return: Interger
 */
int main(int argc, char *argv[])
{
	int i = 1;

	while (argc >= i)
	{
		printf("%s\n", argv[i - 1]);
		i++;
	}
	return (0);
}
