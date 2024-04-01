#include "main.h"

/**
 * create_array - creates an array
 * @size: size of array
 * @c: character to store array
 * Return: 0
 */

char *create_array(unsigned int size, char c);
{
	char *ary;
	int i;

	if (size == 0)
		return (NULL);

	ary = malloc(sizeof(char) * size);
	if (ary == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ary[i] = c;
	return (ary);
}
