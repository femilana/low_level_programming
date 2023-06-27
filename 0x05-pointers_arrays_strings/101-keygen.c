#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char passcode[84];

	int ind = 0, sum = 0
		;
	int dh1;
	int dh2;

	srand(time(0));
	while (sum < 2772)
	{
		passcode[ind] = 33 + rand() % 94;
		sum += passcode[ind++];
	}
	passcode[ind] = '\0';
	if (sum != 2772)
	{
		dh1 = (sum - 2772) / 2;
		dh2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			dh1++;
		for (ind = 0; passcode[ind]; ind++)
		{
			if (passcode[ind] >= (33 + dh1))
			{
				passcode[ind] -= dh1;
				break;
			}
		}
		for (ind = 0; passcode[ind]; ind++)
		{
			if (passcode[ind] >= (33 + dh2))
			{
				passcode[ind] -= dh2;
				break;
			}
		}
	}
	printf("%s", passcode);
	return (0);
}
