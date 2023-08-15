#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: string containing the concatenated result
 */
char *str_concat(char *s1, char *s2)
{
	int s1length = 0;
	int s2length = 0;
	int i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1length++;
	for (i = 0; s2[i] != '\0'; i++)
		s2length++;

	str = malloc(sizeof(char) * (s1length + s2length) + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		str[s1length + i] = s2[i];
	return (str);

}
