#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers
 * less than 4 Million
 * Return: 0 Successful.
 */

int main(void)
{
	int i = 0;
	long j = 1, k = 2, totsum = k;

	while (k + j < 4000000)
	{
	k += j;
	if (k % 2 == 0)
	totsum += k;
	j = k - j;
	++i
	}
	printf("%ld\n", totsum);
	return (0);
}
