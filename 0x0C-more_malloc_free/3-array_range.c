#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - array of integers
 *@min: min
 *@max: max
 *
 *Return: int
 */

int *array_range(int min, int max)
{
int *p;
int i;

if (min > max)
return (NULL);

p = malloc(sizeof(int) * (max - min + 1));

if (p == NULL)
return (NULL);

for (i = 0; min <= max; i++)
{
p[i] = min;
min++;
}

return (p);
}
