#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry Point
 *@argc: Argument Count
 *@argv: Argument Vector
 *
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argv != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
