#include <stdio.h>
#include <errno.h>
#include <string.h>

/**
 * main - print string to standard error
 *
 * Return: returns th value 1
 */

int main(void)
{
	perror(stderr, "and that piece of art is useful\" -Dora Korpar, 2015-10-19");
	return (1);
}
