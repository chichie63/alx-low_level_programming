#include "main.h"
/**
 * _islower - detects lowercase
 *
 * Description: use _putchar
 * @c:lowercases
 * Return: (1) if c is lowercase otherwise (0)
 *
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
		if (i == c)
		lower = 1;

	return (lower);
}
