#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array of integers and
 * initializes it to 0.
 *
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: A pointer to the 2D array, or NULL if insufficient
 *  memory was available or width/height are 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid;     /* Pointer to 2D array */
	int row, col;   /* Loop indices */

	/* Check if width or height are invalid */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for array of row pointers */
	grid = malloc(sizeof(int *) * height);

	/* If memory allocation failed, return NULL */
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row */
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);

		/* If memory allocation failed, free previously */
		/* allocated memory and return NULL */
		if (grid[row] == NULL)
		{
			for (col = 0; col < row; col++)
				free(grid[col]);
			free(grid);
			return (NULL);
		}

		 /* Initialize each element to 0 */
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}

	/* Return pointer to 2D array */
	return (grid);
}
