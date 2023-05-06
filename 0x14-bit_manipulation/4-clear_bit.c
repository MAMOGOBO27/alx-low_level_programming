#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: The pointer of a number
 * @index: s the index, starting from 0 of the bit you want to set
 *
 * Return: 1 (success), -1 (Failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
