#include <unistd.h>

/**
 * main- Entry ponit
 *
 * Description: prints to the standard error
 * 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 * without using printf or puts functions
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
