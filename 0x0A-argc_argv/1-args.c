#include <stdio.h>

/**
 * main - print name
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
