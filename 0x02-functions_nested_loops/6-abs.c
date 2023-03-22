#include "main.h"

/**
 * _abs - computer the absolute value of an integer
 * @c: The number to be computer.
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_num;

	abs_num = c * -1;
	return (abs_num);
	}
	return (c);
}
