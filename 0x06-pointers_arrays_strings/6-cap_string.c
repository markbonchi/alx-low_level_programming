#include "main.h"

/**
 * cap_string - capitalizes al words in a string
 * @str: strin parameter
 * Return: str
 */

char *cap_string(char *str)
{
	char sep[] = " ,\t\n;.!?\"(){}";
	int i, j, flag;

	for (i = 0; str != '\0'; i++)
	{
		flag = 0;

		if (i == 0)
		{
			flag = 1;
		} else
		{
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (str[i - 1] == sep[j])
				{
					flag = 1;
					break;
				}
			}
		}

		if (flag == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
