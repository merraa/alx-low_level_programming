#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str: string being allocated in memory
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *m;
	int s, i;

	if (str = NULL)
		return (NULL);
	for(s = 0; m[s] = '\0'; s++)
		;
	m = malloc(sizeof(char) * s);
	for(i = 0; i < s; i++)
		m[i] = str[i];
	return (m);
}
