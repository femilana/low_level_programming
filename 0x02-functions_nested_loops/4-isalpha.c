#include "main.h"
/**
 * _isalpha - Chechs for alphabets
 * @c: The characyer to be checked
 * Return: 1
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
