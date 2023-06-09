#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: First string
 * @src: Second string
 * @n: Maximum number of bytes to be used from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	/* Find the end of the dest string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Append src to dest */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/* Add the terminating null byte */
	*dest = '\0';

	/* Return a pointer to the resulting string */
	return (ptr);
}
