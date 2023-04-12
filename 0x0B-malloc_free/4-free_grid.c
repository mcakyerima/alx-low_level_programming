#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2D array of integers.
 *
 * @grid: The 2D array of integers.
 * @height: The height of the array.
 */

void free_grid(int **grid, int height)
{
	int row;   /* Loop index */

	/* Free memory for each row */
	for (row = 0; row < height; row++)
		free(grid[row]);

	/* Free memory for row pointers */
	free(grid);
}
