#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D
 * array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **twoD;

	if (width <= 0 || height <= 0)
		return (NULL);
	twoD =(int **)malloc(sizeof(int *) * height);
	if (twoD == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		twoD[x] =(int *)malloc(sizeof(int) * width);
		if (twoD[x] == NULL)
			return (NULL);
	}
	for (x = 0; x < width; x++)
	{
		for (y = 0; y < height; y++)
			twoD[x][y] = '0';
	}
	return (twoD);
}
