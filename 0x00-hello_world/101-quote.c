#include <stdio.h>
#include <unistd.h>

/**
 * main - printing output in stderr
 *
 * Description: String output printed to the standard output
 * Return: value 1 (Failure)
 */

int main(void)
{
	char quote[] = "and that piece of art is useful";
	char auth[] = "Dora Korpar";
	int yr = 2015;
	int mon = 10;
	int date = 19;

	fprintf(stderr, "%s\" - %s, %d-%d-%d\n", quote, auth, yr, mon, date);
	return (1);
}
