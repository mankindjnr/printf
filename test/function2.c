#include "main.h"

/**
 *unsigned_integer - print unsigned integer
 *@list: the arguments
 *Return: number of characters printed
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsigned_number(num));

	if (num < 1)
		return (-1);

	return (print_unsigned_number(num));
}

/**
 *print_char - prints a character
 *@list: the arguments
 *Return: number of characters printed
 */

int print_char(va_list list)
{
	write_char(va_arg(list, int));
	return (1);
}
