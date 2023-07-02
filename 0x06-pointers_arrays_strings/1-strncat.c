# include "main.h"

/**
 * _strncat - concatenTE STring
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lenght, a;

	lenght = 0;
	while (dest[lenght] != '\0')
	{
		lenght++;
	}

	for (a = 0; a < n && src[a] != '\0'; a++, lenght++)
	{
		dest[lenght] = src[a];
	}

	dest[lenght] = '\0';
	return (dest);
}
