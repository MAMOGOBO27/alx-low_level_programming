#include "main.h"

/**
 * print_times_table - prints the times tables of the input
 * starting with 0;
 * @n: The value of the times tables to be printed.
 */

void print_times_table(int n)
{
	int number, multible, prod;

	if (n >= 0 && n <= 15)
	{
	for (number = 0; number <= n; number++)
	{
	_putchar('0');
	for (multible = 1; multible <= n; multible++)
	{
	_putchar(',');
	_putchar(' ');
	prod = number * multible;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 9)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
