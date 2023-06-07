#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the number, or -1 if an error occurs.
 *
 * Description: This function recursively calculates the factorial of a number
 *              by multiplying the number with the factorial of the previous
 *              number, until it reaches 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	/* Return -1 to indicate an error for negative numbers */

	if (n == 0)
		return (1); /* Return 1 for the factorial of 0 */

	return (n * factorial(n - 1));
	/* Recursively call the function with the previous number */
}
