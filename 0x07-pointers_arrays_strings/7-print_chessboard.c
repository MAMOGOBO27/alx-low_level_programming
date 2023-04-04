#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int p;
	int o;

	for (p = 0; p < 8; p++)
	{
	for (o = 0; o < 8; o++)
	_putchar(a[p][o]);
	_putchar('\n');
	}
}
