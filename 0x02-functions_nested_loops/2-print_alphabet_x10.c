#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	int alpha;
	int alpha1;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (alpha1 = 'a'; alpha1 <= 'z'; alpha++)
		{
			_putchar(alpha1);
		}
		_putchar('\n');
	}
}
