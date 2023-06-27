#include "main.h"

/**
 * _puts - prints out a string
 * @str: str parameter
 * Return: 0
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
