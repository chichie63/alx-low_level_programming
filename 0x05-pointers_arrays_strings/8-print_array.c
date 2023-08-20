#include <stdio.h>

/**
 * print_array - function that print number of an array
 * followed by a new line.
 * @a: input array
 * @n: length of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
