#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char b;
	int k = 0;

	while (k <= 9)
	{
        for (b = 'a'; b <= 'z'; b++)
	{
	_putchar(b);
        }
	_putchar('\n');
	k++;
	}
}
