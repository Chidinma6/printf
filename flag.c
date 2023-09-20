#include "main.h"

/**
 * the_flags - Active flags
 * @format: Formatted string to print
 * @i: collect parameter.
 * Return: Flags:
 */
int the_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, flag_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {MINUS_FUNC, PLUS_FUNC, ZERO_FUNC, HASH_FUNC, SPACE_FUNC, 0};

	for (flag_i = *i + 1; format[flag_i] != '\0'; flag_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[flag_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*i = flag_i - 1;

	return (flags);
}
