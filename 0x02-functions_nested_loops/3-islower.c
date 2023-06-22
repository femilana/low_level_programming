#include "main.h"

/**
 * _islower - Checks for lowercase
 * @c: The item that wud be checked
 * Return: 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
