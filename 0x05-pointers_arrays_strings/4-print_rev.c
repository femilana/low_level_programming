#include "main.h"

/**
 * print_rev - prints the parameter in reverse
 * @s: parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int begin = 0;

	while (s[begin])
		begin++;
	while (begin--)
		_putchar(s[begin]);
	_putchar('\n');
}
