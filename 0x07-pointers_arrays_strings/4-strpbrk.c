#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: accept
 * Return:pointer to d byte in s that matches one of d bytes in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int point;

	while (*s)
	{
		for (point = 0; accept[point]; point++)
		{
			if (*s == accept[point])
			{

				return (s);
			}
			s++;
		}
	}
	return ('\0');
}
