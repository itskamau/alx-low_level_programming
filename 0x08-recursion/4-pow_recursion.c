#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The result of x raised to the power of y,
 *         or -1 if an error occurs.
 *
 * Description: This function recursively calculates the value of x raised to
 *              power of y by multiplying x with the result of the function
 *              recursively called with x and y - 1,
 *              until y becomes 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* Return -1 to indicate an error for negative exponents */

	if (y == 0)
		return (1); /* Return 1 when the exponent is 0 */

	return (x * _pow_recursion(x, y - 1));
	/* Recursively call the function with the exponent reduced by 1 */
}
