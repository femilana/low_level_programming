#include "main.h"

/**
 * _strstr - locates sunstring
 * @haystack: string to b searched
 * @needle:string to b located
 * Return: pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int point;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		point = 0;

		if (haystack[point] == needle[point])
		{
			do {
				if (needle[point + 1] == '\0')
					return (haystack);
				point++;
			}

			while (haystack[point] == needle[point]);

		}
		haystack++;
	}
	return ('\0');
}
