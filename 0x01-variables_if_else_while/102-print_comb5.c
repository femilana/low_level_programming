#include <stdio.h>
/**
 * main - entry point of the progream
 * Return: 0
 */

int main(void)
{
	int num1, num2;
	 for (num1 = 0; num1 <= 99; num1++)
	 {
		 for (num2 = num1 ; num2 <= 99; num2++)
		 {
			 int firstnum1 = num1 / 10;
			 int secnum1 = num1 % 10;
			 int firstnum2 = num2 / 10;
			 int secnum2 = num2 % 10;

			 putchar(firstnum1 + '0');
			 putchar(secnum1 + '0');
			 putchar(' ');
			 putchar(firstnum2 + '0');
			 putchar(secnum2 + '0');

			 if (num1 != 99 || num2 != 99)
			 {
				 putchar(',');
				 putchar(' ');
			 }
		 }
	 }
	 return (0);
}
