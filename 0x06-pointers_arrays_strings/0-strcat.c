#include "main.h"
/**
 * _strcat - concatante two strinds
 * @src: string source
 * @dest: dsetination
 * Return: destination
 */

char *_strcat(char *dest, char *src)
{
	int lenght, a;

	lenght = 0;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}

	for (a = 0; src[a] != '\0'; a++, lenght++)
	{
		dest[lenght] = src[a];
	}
	dest[lenght] = '\0';

	return (dest);
}
