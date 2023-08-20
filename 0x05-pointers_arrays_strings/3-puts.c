#include "main.h"
/**
 * _puts - function that prints a string
 * @str: pointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
