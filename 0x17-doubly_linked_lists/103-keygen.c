#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int length = strlen(argv[1]), u, temp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (length ^ 59) & 63;
	password[0] = codex[temp];

	temp = 0;
	for (u = 0; u < length; u++)
		temp += argv[1][u];
	password[1] = codex[(tmp ^ 79) & 63];

	temp = 1;
	for (u = 0; u < len; u++)
		tmp *= argv[1][u];
	password[2] = codex[(temp ^ 85) & 63];

	temp = 0;
	for (u = 0; u < len; u++)
	{
		if (argv[1][u] > tmp)
			temp = argv[1][u];
	}
	srand(temp ^ 14);
	password[3] = codex[rand() & 63];

	temp = 0;
	for (u = 0; u < len; u++)
		tmp += (argv[1][u] * argv[1][u]);
	password[4] = codex[(tmp ^ 239) & 63];

	for (u = 0; u < argv[1][0]; u++)
		tmp = rand();
	password[5] = codex[(tmp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
