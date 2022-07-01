#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - printing output in stderr
 *
 * Description: String output printed to the standard output
 * Return: value 1 (Failure)
 */

int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar,\
	2015-10-19\n", 59);
	return (1);
}
