#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print name
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		if (i > 0 && !isdigit(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
