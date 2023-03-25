#include "main.h"

/**
 * Print_square
 * Return: empty
 */

void print_square(int size)
{
	int v, b;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (v = 0; v < size; v++)
	{
	for (b = 0; b < size; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
