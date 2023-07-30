#include "main.h"
/**
 * print_last_digit - print the last digit of number
 *
 * @r: the integer input
 *
 * Description: use _putchar to print
 *
 * Return: value of the last digit of r
 */

int print_last_digit(int r)
{
	int i;

	if (r < 0)
		i = -1 * (r % 10);
	else
		i = r % 10;
	_putchar((i % 10) + '0');

	return (i % 10);
}
