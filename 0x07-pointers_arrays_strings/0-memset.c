#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @n: number of bytes to be changed
 * @s: pointer to the memory area
 * @b: the desired value
 * Return: changed array with new value fore a bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
