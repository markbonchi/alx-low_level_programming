#include <stdio.h>

/*
 * main - peinting output in stderr
 *
 * Return: value 1 (Failure)
 */

int main(void)
{
	char quote[] = "and that piece of art is useful";
	char ref[] = "Dora Korpar";
	int yr = 2015;
	int mon = 10;
	int dt = 19;
	fprintf(stderr, "%s\" - %s, %d-%d-%d\n", quote, ref, yr, mon, dt);
	return (1);
}
