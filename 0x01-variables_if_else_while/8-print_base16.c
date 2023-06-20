#include <stdio.h>
/**
 * main - entry point of the code
 * Return: 0
 */

int main(void)
{
	int base_16;
	char alpha;

	for (base_16 = 0; base_16 <= 9; base_16++)
	{
		putchar(base_16);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
