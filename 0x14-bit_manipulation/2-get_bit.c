#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_bit - sets the bit to index 1
 * @n: Number to pointer
 * @index: is the index, starting from 0 of the bit you want to get
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
return (-1);

bit_val = (n >> index) & 1;

return (bit_val);
}
