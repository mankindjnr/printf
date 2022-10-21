#include "main.h"

/**
 *_printf - receives the main string and necessary parameters
 *@format: last fixed argument of the variadic function
 *Return: count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"r", print_reversed},
		{"u", unsigned_integer},
		{"r", print_reversed},
		{"R", rot13},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	printed_chars = execute(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
