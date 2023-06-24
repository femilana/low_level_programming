#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime number
 * Return: 0
 */

int main(void)
{
	unsigned long int a, b = 612852475143;

	for (a = 3, a < 782849; a = a + 2)
	{
		while ((b % a == 0) && (b != a))
			b = n / a;
	}
	printf("%lu\n", n);
	return (0);
}
