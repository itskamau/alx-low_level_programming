#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: string pointer
 *
 * Return: void
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
