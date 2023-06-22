#include "main.h"
/**
 * print_last_digit - Print out last digit of a num
 * @n: The num to be printed
 * Return: val of last digit num
 */

int print_last_digit(int n)
{
	int end;

	end = n % 10;
	if (end < 0)
	{
		end = end * -1;
	}
	_putchar(end + '0');
	return (end);
}
