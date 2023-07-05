#include "main.h"

/**
 * _strchr - locate string
 * @s: string
 * @c: character
 * Return: pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int point;

	for (point = 0; s[point] >= '\0'; point++)
	{
		if (s[point] == c)
			return (s + point);
	}

	return ('\0');
}
