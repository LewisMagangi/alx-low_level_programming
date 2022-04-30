#include "main.h"

/**
* leet - Entry point
* @n: input
*
* Return: Always 0 (Success)
*/
char *leet(char * n)
{
	int i = 0, j;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '3', '0', '7', '1'};

	while (n[i])
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == find[j])
			{
				n[i] = replace[j / 2];
				break;
			}
		}
		i++;
	}

	return (n);
}
