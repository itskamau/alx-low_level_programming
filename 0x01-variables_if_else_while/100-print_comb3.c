#include <stdio.h>

/**
 * main- entry point of program
 *
 * Description: a program that prints all possible different combinations of
 * two digits.
 * The two digits must be different
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstDig, secondDig;

	for (firstDig = 0; firstDig <= 8; firstDig++)
	{
		for (secondDig = firstDig + 1; secondDig <= 9; secondDig++)
		{
			putchar(firstDig + '0');
			putchar(secondDig + '0');

			if (firstDig != 8 || secondDig != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
