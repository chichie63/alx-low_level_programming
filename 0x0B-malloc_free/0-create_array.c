#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of chars and initializes with a specific char
 * @size: size of char
 * @c: input value
 * Return: pointer to array, NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}