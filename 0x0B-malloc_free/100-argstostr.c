#include "main.h"

/**
 * argstostr - concatenate all arguments of your program
 * @ac: argument counter
 * @av: argument vector
 * Return: s || NULL
 */

char *argstostr(int ac, char **av);
{
	int i, size = 0, j, num = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, size++)
		size += _strlen(av[i]);

	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, num++)
			s[num] = av[i][j];
		s[num] = '\n';
		num++;
	}
	s[num] = '\0';
	return (s);
}
