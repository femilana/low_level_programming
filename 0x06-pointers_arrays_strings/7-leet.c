#include "main.h"
/**
 * leet - encodes 1337
 * @a: pointer
 * Return: pointer
 */

char *leet(char *a)
{
	int lenght, count;
	char letters[] = "aAeEoOTlL";
	char nums[] = "4433007711";

	lenght = 0;

	while (a[lenght] != '\0')
	{
		count = 0;
		while (count < 10)
		{
			if (letters[count] == a[lenght])
			{
				a[lenght] = nums[count];
			}

			count++;
		}
		lenght++;
	}
	return (a);
}
