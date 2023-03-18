#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int k;
char lower;
for (k = '0'; k <= '9'; k++)
putchar(k);
for (lower = 'a'; lower <= 'f'; lower++)
putchar(lower);
putchar('\n');

return (0);
}
