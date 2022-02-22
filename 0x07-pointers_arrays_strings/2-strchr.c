#include "main.h"
/**
 * _strchr - locate a character
 * @s: string
 * @c: char
 * Return: something
 */
char *_strchr(char *s, char c)
{

	do	{

		if (*s == c)
			{
			break;
			}
		} while (*s++);

return (s);
}
