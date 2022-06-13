#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j <= n - 1; j++)
	{
		printf("%d\n", a[j]);
		if (j != n - 1)
			printf(", ");
	}
	printf("\n");
}
