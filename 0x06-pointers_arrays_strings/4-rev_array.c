#include "main.h"

/**
 * reverse_array - reverse cont
 * @a: array
 * @n: numb of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tem, count;

	n = n - 1;
	count = 0;

	while (count <= n)
	{
		tem = a[count];
		a[count++] = a[n];
		a[n--] = tem;
	}
}
