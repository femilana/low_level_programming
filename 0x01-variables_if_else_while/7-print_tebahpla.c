#include <stdio.h>
/**
 * main - entry point of the code
 * Return: 0
 */
int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse <= 'a'; reverse--)
	{
		putchar(reverse + '0');
	}
	putchar('\n');
	return (0);
}
