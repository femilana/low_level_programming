#include "main.h"
#include <stdio.h>

int check(int n, int a);


/**
 * is_prime_number - retrun prime number
 * @n: number
 * Return: interger value
 */

int is_prime_number(int n)
{
	return (check(n, 1));
}

/**
 * check - verify if the number is a prime number
 * @n: parameter that would be checked
 * @a: iteration time
 * Return: 1 for prime
 */

int check(int n, int a)
{
	if (n <= 1)
		return (0);

	if (n % a == 0 && a > 1)
		return (0);

	if ((n / a) < a)
		return (1);

	return (check(n, a + 1));
}
