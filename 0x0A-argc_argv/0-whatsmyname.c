#include <stdio.h>
/**
 * main - prints ts iname
 * @argc: argument count
 * @argv: argument vector
 * Description: using argv to print name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
