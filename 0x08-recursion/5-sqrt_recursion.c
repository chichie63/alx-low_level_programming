#include "main.h"
#include <stdio.h>

int _sqrt(int n, int c);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the natural square root
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * actual_sqrt - returns natural square
 * root of a number
 * @n: value with square root
 * @c: iterator
 * Return: natural square root
 */

int _sqrt(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);
	return (_sqrt(n, c * 1));
}
