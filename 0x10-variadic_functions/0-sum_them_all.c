#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of
 * all its parameters.
 *@n: number of arguments
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(arguments, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}
