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

	printf("Size of a char: %u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %u byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(_i));
	printf("Size of a long long int: %u byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
