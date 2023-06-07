#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of the number,
 *         or -1 if the number does not have a natural square root.
 *
 * Description: This function recursively calculates the natural square root of
 *              a number by checking if the square of a guess is equal to
 *              the number.
 *              The guess starts from 1 and increments until it exceeds the
 *              number.
 *              If the square of a guess is equal to the number, the guess is
 *              the square root.
 *              If the guess exceeds the number, it means the number does not
 *              have a natural square root.
 */

int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 1));
}

/**
 * sqrt_recursive - Helper function to recursively calculate the square root.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of the number,
 *         or -1 if the number does not have a natural square root.
 */

int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess); /* The guess is the square root */

	if (guess * guess > n)
		return (-1); /* The number does not have a natural square root */

	return (sqrt_recursive(n, guess + 1));
	/* Increment the guess and make a recursive call */
}
