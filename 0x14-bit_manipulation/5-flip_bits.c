#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * flip_bits - counts the number of bits to change around the numbers
 * @n: Input Number
 * @m: Second input number
 *
 * Return: The number of bits to interchange
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
	current = exclusive >> i;
	if (current & 1)
	count++;
	}
	return (count);
}
