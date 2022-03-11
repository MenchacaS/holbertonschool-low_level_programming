#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: separator
 * @n: n
 *
 * Return: sup
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
