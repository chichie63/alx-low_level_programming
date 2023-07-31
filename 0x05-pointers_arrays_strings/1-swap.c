#include "main.h"
/**
 * swap_int - function swaps two int
 *
 * @a: first pointer
 * @b: second pointer
 *
 * Description: swap two integers
 * Return: (0)
 */

void swap_int(int *a, int *b)
{
	int empty;
	int *c = &empty;

	*c = *a;
	*a = *b;
	*b = *c;
}
