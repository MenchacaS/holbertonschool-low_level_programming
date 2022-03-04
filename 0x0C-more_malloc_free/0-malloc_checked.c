#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - heck
 *@b: b
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (p == NULL)
exit('b');
return (p);
}
