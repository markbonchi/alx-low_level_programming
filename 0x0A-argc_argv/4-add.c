#include <stdio.h>
#include <stdlib.h>

/**
 * isIntegar - checks the vakue of an int
 * @s: char parameter to check
 * Return: 0 || 1
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

/**
 * main - add positive numbers
 * @argc: int argument
 * @argv: array argument
 * Return: 0 || 1
 */

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
