#include <stdio.h>
/**
 * main - entry point
 *Return: 0
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
		num++;
	{
		putchar(num + '0');

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
