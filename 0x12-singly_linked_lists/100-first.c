#include <stdio.h>

/**
 * myFirst - prints before main
 */

void myFirst(void)__attribute__((constructor));

void myFirst(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon \
my back!\n");
}
