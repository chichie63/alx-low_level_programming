#include "main.h"
#include <stdio.h>

/**
 * _sqrt - returns natural square root of a number
 * @n: value with square root
 * @c: iterator
 * Return: natural square root, -1
 */

int _sqrt(int n, int c)
{
	if (c * c == n)

		return (c);

	if (c * c > n)

		return (-1);

	return (_sqrt(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the natural square root
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
