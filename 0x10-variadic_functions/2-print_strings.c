#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function
 * @...: Avariable number of string to be printed
 *
 * Description: if separator is NULL, it is not printed.
 * if one of the string if NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	for (index = 0; index < n; index++)
	{
	str = va_arg(strings, char *);
	if (str == NULL)
	printf("(nil)");
	else
	printf("%s", str);

	if (index != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}