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
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (n > 5)
		printf("last digit of %d is %d and is greater than 5", n, l);
	else if (n == 0)
		printf("last digit of %d is %d and is 0", n, l);
	else
		printf("last digit of %d is %d and is less than 6 and not 0", n, l);
	printf("\n");

	return (0);
}
