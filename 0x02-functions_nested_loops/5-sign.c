#include "main.h"
/**
 * print_sign - function to print sign of number
 *
 * @n: vakue to us
 *
 * Description: use n as condition
 *
 * Return: 0 or 1 depending
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
