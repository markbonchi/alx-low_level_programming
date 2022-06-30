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
	long long int __i;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(char c));
	printf("Size of an int: %d byte(s)\n", sizeof(int i));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int _i));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int __i));
	printf("Size of a float: %d byte(s)\n", sizeof(float f));
	return (0);
}
