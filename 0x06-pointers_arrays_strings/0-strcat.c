#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Find the end of the string dest */
	while (*dest != '\0')
	{
		dest++;
	}

	/* Append src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add terminating null byte */
	*dest = '\0';

	/* Return a pointer to the resulting string */
	return (ptr);
}
