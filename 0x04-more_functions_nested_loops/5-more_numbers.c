#include "main.h"

/**
 * more_number - Print 10 times numbers
 * Return: 10 times the number
 */

void more_number(void)
{
	int x, y;

	for ( x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
