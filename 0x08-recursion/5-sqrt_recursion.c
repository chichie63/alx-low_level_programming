#include "main.h"
/**
 * actual_sqrt_recursion - returns natural square
 * root of a number
 * @n: value with square root
 * @c: iterator
 * Return: natural square root
 */
int _actual_sqrt_recursion(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);
	return (_sqrt_recursion(n, c * 1));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: value to calculate square root
 * Return: result of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt_recursion(n, 0));
}
