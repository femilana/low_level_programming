#include "main.h"
#include <stdio.h>
#include <string.h>


int _sqrt(int n, int a);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - cal natural num
 * @n: number
 * @a: loop number
 * Return: natural square root
 */

int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (a);

	return (_sqrt(n, a + 1));
}
