#include "main.h"

/**
 * the_precision - Prints the precision
 * @format: Formatted strings
 * @i: List of arguments to print.
 * @list: list.
 * Return: Precision.
 */
int the_precision(const char *format, int *i, va_list list)
{
	int current_pre = *i + 1;
	int precision = -1;

	if (format[curr_i] != '.')
		return (precision);

	precision = 0;

	for (current_pre += 1; format[current_pre] != '\0'; current_pre++)
	{
		if (digit_char(format[current_pre]))
		{
			precision *= 10;
			precision += format[current_pre] - '0';
		}
		else if (format[current_pre] == '*')
		{
			current_pre++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = current_pre - 1;

	return (precision);
}
