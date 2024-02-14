#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplys two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int first = 0;
	int second = 0;

	if (argc == 3)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		printf("%d\n", first * second);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
