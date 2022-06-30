#include <stdio.h>

/**
 * main - Size of various types on the computer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int _i;
	long long int l;
	float f;

	printf("Size of a char: %d byte(s)\n", (int)sizeof(char c));
	printf("Size of an int: %d byte(s)\n", (int)sizeof(int i));
	printf("Size of a long int: %d byte(s)\n", (int)sizeof(long int _i));
	printf("Size of a long long int: %d byte(s)\n", (int)sizeof(long long int l));
	printf("Size of a float: %d byte(s)\n", (int)sizeof(float f));
	return (0);
}
