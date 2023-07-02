#include "main.h"

/**
 * string_toupper - uppercase
 * @x: pointer
 * Return: uppercase
 */

char *string_toupper(char *x)
{
	int lenght = 0;

	while (x[lenght] != '\0')
	{
		if (x[lenght] >= 97 && x[lenght] <= 122)
		{
			x[lenght] = x[lenght] - 32;
		}
		lenght++;
	}
	return (x);
}
