#include "main.h"
#include <stdio.h>

/**
 * rot13 - rot13
 * @a: pointer
 * Return: a
 */

char *rot13(char *a)
{
	int g;
	int h;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (g = 0; a[g] != '\0'; g++)
	{
		for (h = 0; h < 52; h++)
		{
			if (a[g] == input[h])
			{
				a[g] = output[h];
				break;
			}
		}
	}
	return (a);
}
