#include "main.h"
/**
 * _isalpha - fuction checks alphabetic charcter
 *
 * Description: using Putchar to print
 *
 * @c: collect character
 *
 * Return: 1 if c is low or upper otherwise 0
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
		for (upper = 'A'; upper <= 'Z'; upper++)
			if (lower == c || upper == c)
				letter = 1;
	return (letter);
}
