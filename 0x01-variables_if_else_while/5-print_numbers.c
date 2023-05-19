#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}

	putchar('\n');

	return (0);
}
