#include "main.h"

/**
 * printable_char - Check printable chars
 * @c: Char.
 * Return: 1 is printable, 0 otherwise
 */
int prinatable_char(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa - Append ascci to hexadecimal
 * @buffer: Array of chars.
 * @i: Index to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: 3 (success)
 */
int append_hexa(char ascii_code, char buffer[], int i)
{
	char mapping_to[] = "0123456789ABCDEF";
	/* Hexa format code is 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = mapping_to[ascii_code / 16];
	buffer[i] = mapping_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifies chars
 * @c: Char to be evaluated
 * Return: 1 for digit, 0 otherwise
 */
int digit_char(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size - Casts a number to sizes
 * @num: Number to casted.
 * @size: Number type to be casted
 * Return: Casted value
 */
long int convert_size(long int num, int size)
{
	if (size == LONG_STR)
		return (num);
	else if (size == SHORT_STR)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_unsgnd_sizes - Casts a number to size
 * @num: Number casted
 * @size: Number indicating casted type
 * Return: Casted value
 */
long int convert_unsgnd_sizes(unsigned long int num, int size)
{
	if (size == LONG_STR)
		return (num);
	else if (size == SHORT_STR)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
