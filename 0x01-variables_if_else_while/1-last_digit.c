#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- Entry point
 *
 * Description: This program will assign a random number to the
 * variable n each time it is executed.
 * It then print the last digit of the number stored in the variable n.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	number = abs(n) % 10;

	if (number > 5)
	{
		printf("%d and is greater than 5\n", number);
	}
	else if (number == 0)
	{
		printf("%d and is 0\n", number);
	}
	else if ((number < 6) && (number != 0))
	{
		printf("%d and is less than 6 and not 0\n", number);
	}
	return (0);
}
