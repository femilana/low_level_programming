#include "main.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 * @a: pointer array
 * @n: parameter
 * Return: 0
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
