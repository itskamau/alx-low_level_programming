#include <stdio.h>

/**
 * main- entry point
 *
 * Description: a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * return: always 0 (success)
 */

int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}

	putchar('\n');

	return (0);
}
