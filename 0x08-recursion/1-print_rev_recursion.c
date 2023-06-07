#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 *
 * Description: This function recursively prints each character of the string
 *              in reverse order.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	/* Recursively call the function with the next character */
	_putchar(*s); /* Print the current character after the recursive call */
}
