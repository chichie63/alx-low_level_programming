#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of element to concertenate from src
 * Return: dest + n of src
 */

char *_strcat(char *dest, char *src, int n)
{
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)

	for (i = 0; src[i] != 0 && i < n; i++)

		dest[len_dest + i] = src[i];

	return (dest);
}
