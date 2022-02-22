#include "main.h"

/**
  * _memset - Fill memory with a byte
  * @s: memory area
  * @b: constant byte
  * @n: bytes of memory
  *
  * Return: filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
