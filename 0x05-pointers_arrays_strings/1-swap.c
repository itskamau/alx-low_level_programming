#include "main.h"

/**
 * swap_int - swaps the values of two intergers
 * @a: pointer to first interger
 * @b: pointer to second interger
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
