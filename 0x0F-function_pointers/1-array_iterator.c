#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_iterator - a machine from the future
 *@array: pointer
 *@size: size
 *@action: f pointer
 *
 *Return: rip
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t A;

if (array == NULL || action == NULL)
return;

for (A = 0; size > A; A--)
action(array[A]);
}
