#include "main.h"

/**
 * more_numbers - print 0-14
 * Return: void
 */

void more_numbers(void)
{
	int g, h;

	for (g = 1; g <= 10; g++)
	{
		for (h = 0; h <= 14; h++)
		{
			if (h >= 10)
				_putchar('1');
			_putchar(h % 10 + '0');
		}
		_putchar('\n');
	}
}
