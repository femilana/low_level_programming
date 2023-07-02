#include <unistd.h>

/**
 * _putchar - write charcter c to stdout
 * @c: character
 * Return: 1
 * on error, -1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
