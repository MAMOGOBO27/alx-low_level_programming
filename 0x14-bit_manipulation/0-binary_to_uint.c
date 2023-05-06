#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_unit - it changes the binary number to unsigned integer
 * @b: the string variable that cointsins the binary number
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int dec_val = 0;

	if (!b)
	return (0);

	for (n = 0; b[n]; n++)
	{
	if (b[n] < '0' || b[n] > '1')
	return (0);
	dec_val = 2 * dec_val + (b[n] - '0');
	}

	return (dec_val);
}
