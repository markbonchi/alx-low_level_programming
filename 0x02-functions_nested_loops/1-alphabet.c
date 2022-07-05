#include "main.h"


/**
 * print_alphabet - prints letters in lowercase
 *
 * Return: 0 (Success)
 */

int print_alphabet(void)
{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 27; i++)
	{
		_putchar(alpha[i]);
	}
	return (0);
}
