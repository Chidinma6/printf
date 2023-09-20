#include "main.h"

/**
 * the_size - Calculate all the sizes
 * @format: Formatted strings
 * @i: List to printed.
 * Return: Size.
 */
int the_size(const char *format, int *i)
{
	int current_size = *i + 1;
	int size = 0;

	if (format[current_size] == 'l')
		size = LONG_STR;
	else if (format[current_size] == 'h')
		size = SHORT_STR;

	if (size == 0)
		*i = current_size - 1;
	else
		*i = current_size;

	return (size);
}
