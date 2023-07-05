#include "main.h"
#include <stdio.h>

/**
 **_memset - fills with a byte
 *@s: s
 *@b: b
 *@n: number
 *Return: pointsa to the marry
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
	s[a] = b;
	}
return (s);
}
