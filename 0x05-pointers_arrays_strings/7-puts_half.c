#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int p = 0;
	int l;

	while (str[p] != '\0')
	{
	p++;
	}
	if (p % 2 == 1)
	{
	l = (p -1) / 2;
	l += 1;
	}
	else
	{
	l = p / 2;
	}

	for (; l < p; l++)
	{
	_putchar(str[l]);
	}
	_putchar('\n');
}
