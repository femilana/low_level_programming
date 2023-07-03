#include "main.h"

/**
 * print_number - print num
 * @n: parameter
 * Return: 0
 */

void print_number(int n)
{
	unsigned int net;

	net = n;
	if (n < 0)
	{
		_putchar('-');
		net = -n;
	}
	if (net / 10 != 0)
	{
		print_number(net / 10);
	}
	_putchar((net % 10) + '0');
}
