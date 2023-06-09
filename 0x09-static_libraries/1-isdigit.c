#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 * @ch: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */

int _isdigit(int ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return (1);
	}
	else
		return (0);
}
