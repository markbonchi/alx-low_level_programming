#include <unistd.h>
#include <string.h>

/**
 * main - print string to standard error
 *
 * Return: returns th value 1 (Failure)
 */

int main(void)
{
	char msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(STDERR_FILENO, msg);
	return (1);
}
