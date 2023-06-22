#include "main.h"
/**
 * _abs - Calculates the absolute value of an int
 * @c: The num to be calc
 * Return: Abs val or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int absval;

		absval = c * -1;
		return (absval);
	}
	return (c);
}
