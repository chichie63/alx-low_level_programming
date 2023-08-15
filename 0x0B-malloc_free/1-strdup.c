#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string of char
 * Return: pointer to duplicate string, NULL
 */
char *_strdup(char *str)
{
	char *abc;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	abc = malloc(sizeof(char) * (i + 1));

	if (abc == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		abc[j] = str[j];

	return (abc);
}
