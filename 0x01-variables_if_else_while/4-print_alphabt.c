#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char me, e, q;

	e = 'e';
	q = 'q';

	for (me = 'a'; me <= 'z'; me++)
	{
		if (me != e && me != q)
			putchar(me);
	}
	putchar('\n');

	return (0);
}
