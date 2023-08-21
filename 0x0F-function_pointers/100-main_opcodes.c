#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b, i;
	int (*address)(int, char **) = main;
	unsigned char opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[i]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < b; i++)
	{
		opcodes = *(unsigned char *)address;
		printf("%.2x", opcodes);

		if (i == b - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
