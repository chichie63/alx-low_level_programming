#include "main.h"
/**
 * _strlen - function that returns the length of a string
 *
 *@s: string to be checked
 * Description: printing my strlen
 *
 * Return: (string length)
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
	{
	string_length++;
	}

	return (string_length);
}
