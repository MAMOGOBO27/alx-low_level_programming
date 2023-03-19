#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int g, m;
for (g = '0'; g < '9'; g++)
{
for (m = g + 1; m <= '9'; m++)
{
if (m != g)
{
putchar(g);
putchar(m);
if (g == '8' && m == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
