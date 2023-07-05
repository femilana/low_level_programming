#include "main.h"

/**
 * _strspn - gets  length of a prefix substring
 * @s: string
 * @accept: accept
 * Return: initial segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int point;

	while (*s)
	{
		for (point = 0; accept[point]; point++)
		{
			if (*s == accept[point])
			{
				byte++;
				break;
			}
			else if (accept[point + 1] == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
