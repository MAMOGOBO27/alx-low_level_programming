#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')); 
}
