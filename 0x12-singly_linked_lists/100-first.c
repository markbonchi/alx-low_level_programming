#include <stdio.h>

/**
 * myFirst - prints before main
 */

void myFirst(void)__attribute__((constructor));

void myFirst(void)
{
	char *str1, *str2;

	str1 = "You're beat! and yet, you must allow";
	str2 = "I bore my house upon my back!";
	printf("%s, \n%s\n", str1, str2);
}
