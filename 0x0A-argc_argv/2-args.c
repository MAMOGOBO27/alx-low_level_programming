#include "main.h"
#include <stdio.h>

/**
 * main - Prints all the args content
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int v;

	for (v = 0; v < argc; v++)
	{
	printf("%s\n", argv[v]);
	}
	return (0);
}
