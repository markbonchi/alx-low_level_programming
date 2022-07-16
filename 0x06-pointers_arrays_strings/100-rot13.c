#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string parameter
 * Return: str
 */

char *rot13(char *str)
{
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCEDFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 54; j++)
		{
			if (((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A')) && str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
		}
	}
	return (str);
}
