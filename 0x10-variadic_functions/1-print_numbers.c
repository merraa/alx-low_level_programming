#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int x;

	va_start (arg, n); 
	for (i = 0; i < n; i++)
	{
		x = va_arg (arg, int);
		if (separator != NULL)
		{
			printf("%d%s", x, separator);
		}
	}
	printf("\n");
	va_end(arg);
}
