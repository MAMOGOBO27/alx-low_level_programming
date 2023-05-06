#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_binary - display the binary same as the decimal number
 * @n: number of binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
	current = n >> i;

	if (current & 1)
	{
	_putchar('1');
	count++;
	}
	else if (count)
	_putchar('0');
	}
	if (!count)
	_putchar('0');
}
