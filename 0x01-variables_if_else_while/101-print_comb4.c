#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: a program that prints all possible different combinations of
 * three digits.
 * Numbers must be separated by ,, followed by a space
 * The three digits must be different
 * Print only the smallest combination of three digits
 * Numbers should be printed in ascending order, with three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstD, secondD, thirdD;

	for (firstD = 0; firstD <= 7; firstD++)
	{
		for (secondD = firstD + 1; secondD <= 8; secondD++)
		{
			for (thirdD = secondD + 1; thirdD <= 9; thirdD++)
			{
				putchar(firstD + '0');
				putchar(secondD + '0');
				putchar(thirdD + '0');

				if (firstD != 7 || secondD != 8 || thirdD != 9)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
