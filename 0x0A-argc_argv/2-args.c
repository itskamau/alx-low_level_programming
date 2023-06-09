#include <stdio.h>

/**
 * main - entry point
 * Description: prints all command line arguements
 * @argc: the count of arguements
 * @argv: the array of arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
