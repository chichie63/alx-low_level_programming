#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of element to concertenate from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;
	
	for (i = 0; i < n && *src != '\0'; i++)

		dest[len + i] = *src;
	src++;

	dest[len + i] = '\0';
	return (dest);
}
