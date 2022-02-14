#include "main.h"
/**
  * _puts - Printer 3000
  * @str: The string
  *
  * Return: hey
  */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
