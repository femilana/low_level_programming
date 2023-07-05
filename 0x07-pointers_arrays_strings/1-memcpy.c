#include "main.h"

/**
 * _memcpy - copies memories
 * @dest: destination
 * @src: source
 * @n: number
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}
