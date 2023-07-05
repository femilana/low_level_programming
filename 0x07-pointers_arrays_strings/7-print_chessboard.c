#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - print chessboard
 * @a: pointer
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int p, b;

	for (p = 0; p < 8; p++)
	{
		for (b = 0; b < 8; b++)
		{
			putchar(p[a][b]);
		}
		 putchar('\n');
	}
}
