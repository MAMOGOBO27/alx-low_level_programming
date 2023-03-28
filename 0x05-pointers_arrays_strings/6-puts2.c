#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 * Return: void
 */
void puts2(char *str)
{
	int l;
	int k = 0;

	while (str[k] != '\0')
	{
	k++;
	}

	for (l = 0; l < k; l += 2)
	{
	_putchar(str[l]);
	}
	_putchar('\n');
}
