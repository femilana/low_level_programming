#include <stdio.h>
/**
 * main - A program that print out the size of various types
 * Returns: Always 0 (Succes)
*/
int main(void)
{
	char text;
	int number;
	long int big;
	long long int B;
	float decimal;

	printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(text);
	printf("size of a int: %lu byte(s)\n", (unsigned long) sizeof(number);
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(big);
	printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(B);
	printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(decimal);
	return (0);
	}
