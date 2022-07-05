#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10xtimes
 *
 * Return: 1 (Success)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
		_putchar('\n');
	}
	_putchar('\n');
}
