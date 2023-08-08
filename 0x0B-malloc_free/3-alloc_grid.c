#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*alloc_grid - returns a pointer to a 2 dimensional array of integers.
*@width: width of 2D array
*@height: height of 2D array
*Return: NULL on failure and if width or height is 0 or negative.
*/

int **alloc_grid(int width, int height)
{
int **grid, i, j;

grid = malloc(sizeof(*grid) * height);

{
if (width <= 0 || height <= 0  || grid == 0)
{
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
	grid[i] = malloc(sizeof(**grid) * width);
	if (grid[i] == 0)
	{
		/*free everthing if nalloc fails*/
		while (i--)
		free(grid[i]);
		free(grid);
		return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
}
return (grid);
}
}