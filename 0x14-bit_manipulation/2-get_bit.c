#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_bit - sets the bit to index 1
 * @n: Number to pointer
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: 1 (success), -1 (failure)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
