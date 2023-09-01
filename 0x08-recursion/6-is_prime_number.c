#include "main.h"

int check_prime(int, int);
/**
 * is_prime_number - calculation of prime number
 * @n: input
 * Return: 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks prime numbers
 * @n: input
 * @a: iterator
 * Return: 0, 1
 */
int check_prime(int n, int a)
{
	if (n <= 1)
		return (0);
	if (n % a == 0 && a > 1)
		return (0);
	if ((n / a) < a)
		return (1);
	return (check_prime(n, a + 1));
}
