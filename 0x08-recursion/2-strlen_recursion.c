#include "main.h"

/**
 *  _strlen_recursion - prints out lenght of a string
 *  @s: string
 *  Return: interger
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;

	return (_strlen_recursion(s) + 1);
}
