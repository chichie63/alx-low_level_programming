#include <stdio.h>
/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("Number of arguments: %d\n", argc - 1);
	return (0);
}
