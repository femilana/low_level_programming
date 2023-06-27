#include "main.h"

/**
 * _atoi - convert string to int
 * @s: parameter
 * Return: an int
 */

int _atoi(char *s)
{
	int ch = 0;
	unsigned int nl = 0;
	int men = 1;
	int sen = 0;

	while (s[ch])
	{
		if (s[ch] == 45)
		{
			men *= -1;
		}

	while (s[ch] >= 48 && s[ch] <= 57)
	{
		sen = 1;
		nl = (nl * 10) + (s[ch] - '0');
		ch++;
	}
	if (sen == 1)
	{
		break;
	}
	ch++;
	}
	nl *= men;
	return (nl);
}
