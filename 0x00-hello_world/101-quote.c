#include <unistd.h>

/**
 * main - print string to standard error
 *
 * Return: returns th value 1 (Failure)
 */

int main(void)
{
	write(stderr, "and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	return (1);
}
