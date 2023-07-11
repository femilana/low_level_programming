#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: num of argc
 * @argv: array of argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
