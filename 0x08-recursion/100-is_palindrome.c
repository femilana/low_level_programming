#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - return string lenght
 * @s: string
 * Return: string lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comp - compares strings
 * @string: string
 * @n1: 1st iterator
 * @n2: 2nd iterator
 * Return: void
 */

int comp(char *string, int n1, int n2)
{
	if (*(string + n1) == *(string + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comp(string, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - check if its palindrome
 * @s: str
 * Return: 1 if palindrome, n 0nif not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}
