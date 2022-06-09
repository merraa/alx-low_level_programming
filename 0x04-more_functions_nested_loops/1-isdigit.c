#include "main.h"

/**
 * _isdigit - A fuction that checks for a digit (0 through 9).
 * @c: value to be checked
 * Return: 1 if c is a digit 0 if it's not.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
