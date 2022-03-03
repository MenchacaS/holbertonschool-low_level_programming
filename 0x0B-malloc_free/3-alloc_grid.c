#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - tron grid
  * @width: halo
  * @height: Cod
  *
  * Return: kingdom
  */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (i = i; j >= 0; j--)
			{
				free(a[j]);
			}

			free(a);
			return (NULL);
		}
