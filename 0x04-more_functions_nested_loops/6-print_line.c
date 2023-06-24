#include "main.h"

/**
 * print_line - draws a straight line
 * @n: input char
 * Return: 0
 */

void print_line(int n)
{
	int g;

	for (g = 0; g < n; g++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
