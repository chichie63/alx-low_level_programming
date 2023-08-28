#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0) Success
 */

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (n > 5)
		printf("ld of %d is %d is greater than 5", n, ld);
	else if (n == 0)
		printf("ld of %d is %d and is 0", n, ld);
	else
		printf("ld of %d is %d and is less tahn 6 and not 0", n, ld);
	printf("\n");

	return (0);
}
