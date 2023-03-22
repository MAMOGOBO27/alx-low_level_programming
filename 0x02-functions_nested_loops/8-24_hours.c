#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of jack Bauer
 * Return: ...
 */

void jack_bauer(void)
{       
        int z, x, q, p;
        
        for (z = 0; z <= 2; z++)
        {       
        for (x = 0; x <= 9; x++)
        {       
        if ((z <= 1 && x <= 9) || (z <= 2 && x <= 3))
        {       
        for (q = 0; q <= 5; q++)
        {       
        for (p = 0; p <= 9; p++)
        {       
        _putchar(z + '0');
        _putchar(x + '0');
        _putchar(58);
        _putchar(q + '0');
	_putchar(p + '0');
	_putchar('\n');
	}
	}
	}
	}
	}
}
