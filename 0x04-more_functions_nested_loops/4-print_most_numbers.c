#include "main.h"

/** 
 * Main - print_most_numbers
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)
{
	int k;
	for (; k <= 9; k++)
	{
	if (k == 2 || k == 4)
	{
	continue;
	}
	else
	{
	_putchar(k + '0')
	}
	}
	_putchar('\n');
}

