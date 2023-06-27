#include "main.h"

/**
 * _strlen - return string lenght
 * @s: the parameter
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
