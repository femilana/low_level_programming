#include "main.h"

/**
 * _isupper - Check d code for lower/upper case
 * @c:The character that wud b checked
 * Return: 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
