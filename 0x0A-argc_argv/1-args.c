#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: numb of argument
 * @argv: array of argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
