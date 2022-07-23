#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print name
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0 (success), 1 (Error)
 */

int isIntegar(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int main(int argc, char *argv[])
{
	int i, add = 0;

	for (i = 1; i < argc; i++)
	{
		if (isIntegar(argv[i]) && i > 0)
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
