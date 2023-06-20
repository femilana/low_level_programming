#include <stdio.h>
/**
 * main - entry point of the code
 * Return: 0
 */

int main(void)
{
	int base_16;

	for (base_16 = 0; base_16 <= 15; base_16++)
	{
		putchar(base_16 < 10 ? base_16 + '0' : base_16 + 'a' - 10);
	}

	putchar('\n');
	return (0);
}
