#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, k;

	while (dest[dlen])
	{
		dlen++;
	}

	for (k = 0; src[k] != 0; k++)
	{
		dest[dlen] = src[k];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
