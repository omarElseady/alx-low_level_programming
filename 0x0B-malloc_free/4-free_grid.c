#include "main.h"

 /**
  *  * free_grid- omar maher
  *   *
  *    * @grid: om
  *     *
  *      * @height: odvfv
  *       * Return: po 0
  */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
