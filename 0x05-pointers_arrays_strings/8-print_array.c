#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Arrays of integers
 * @n: Number of elementsof the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
	printf("%d", a[l]);
	if (l != (n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}
