#include <stdio.h>
/**
 * main - entry point of the code
 *Return: 0
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}

	putchar('\n');

	return (0);
}
