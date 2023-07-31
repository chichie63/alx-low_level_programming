#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: the string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	char tmp;
	int length, i;

	length = 0;

	while (s[length] != '\0')

		length++;

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}
