#include "main.h"

/**
 *print_string - prints a string
 *@list: the arguments - a variable of datatype va_list
 *Return: number of characters printed
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		write_char(str[i]);
	}
	return (i);
}

/**
 *print_percent - prints the percent symbol
 *@list: arguments
 *Return: number of characters printed
 */
int print_percent(__attribute__((unused))va_list list)
{
	write_char('%');
	return (1);
}


/**
 *print_number - prints a number
 *@args: the arguments
 *Return: the number of characters
 */
int print_number(va_list args)
{
	int n, div, len;
	unsigned int num;

	n = va_args(list, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += write_char('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}

	for (; num / div > 9; )
	{
		div *= 10;
	}

	for (; div != 0; )
	{
		len += write_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

/**
 *print_integer - prints an integer
 *@list: the argumnets
 *Return: number of charactes printed
 */
int print_integer(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}


/**
 *print_unsigned_number - prints an unsigned number
 *@n: the argumnets
 *Return: the number of characters printed
 */
int print_unsigned_number(va_list int n)
{
	int div, len;
	unsigned int num;

	div = 1;
	len = 0;
	num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += write_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}
