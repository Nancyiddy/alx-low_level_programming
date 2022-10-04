#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
        int **array;
        int x, y;

        if (width <= 0 || height <= 0)
                return (NULL);


        array = malloc(sizeof(int *) * height);

        if (array == NULL)
                return (NULL);

        for (x = 0; x < height; x++)
        {
                array[x] = malloc(sizeof(int) * width);

                if (array[x] == NULL)

                {       for (; x >= 0; x--)
                                free(array[x]);

                        free(array);
                         return (NULL);
                }
        }

        for  (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			array[x][y] = 0;
	}

	return (array);
