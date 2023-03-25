#include "main.h"

/**
 * Print_diagonal - Draw a diagonal lines
 * Return: empty
 */

void print_diagonal(int n)
{
	int c, v;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (c = 0; c < n; c++)
	{
	for (v = 0; v < c; v++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
