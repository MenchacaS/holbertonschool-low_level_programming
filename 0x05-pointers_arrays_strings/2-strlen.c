#include "main.h"
/**
  * _strlen - Return of the king
  * @s: char
  *
  * Return: uff
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
