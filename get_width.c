#include "main.h"

/**
 * the_width - Print Calculated width
 * @format: Formatted strings.
 * @i: List of arguments to print.
 * @list: list of arguments.
 * Return: width.
 */
int the_width(const char *format, int *i, va_list list)
{
	int current_i;
	int width = 0;

	for (current_i = *i + 1; format[current_i] != '\0'; current_i++)
	{
		if (digit_char(format[current_i]))
		{
			width *= 10;
			width += format[current_i] - '0';
		}
		else if (format[current_i] == '*')
		{
			current_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = current_i - 1;

	return (width);
}
