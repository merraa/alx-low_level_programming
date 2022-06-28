#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1
 * @s2
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *m;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	size = i + j + 1;
	m = malloc(sizeof(char) * size);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		*(m + i) = *(s1 + i);
	for (j = 0; s2[j] != '\0'; j++)
		*(m + i + j) = *(s2 + j);
	if (m == 0)
		return (NULL);
	return (m);
}
