#include "main.h"

/**
 * swap_int - swap two parameter
 * @a: swap and store address of parameter 'b'
 * @b: swap and store address of parameter 'a'
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
