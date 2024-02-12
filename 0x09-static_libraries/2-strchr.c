#include "main.h"
#include <stddef.h>
/**
 * _strchr - function locates a character in a string
 * @s: string to search
 * @c: characters to search in s
 * Return: NULL or s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
