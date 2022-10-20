#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 *struct convert - defines a structure for symbols and fucntions
 *@sym: the operator
 *@f: the function associated
 */
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/*functions*/
int execute(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int write_char(char);
int print_string(va_list);
int print_char(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int unsigned_integer(va_list);
int rot13(va_list);
int print_reversed(va_list arg);
char *rev_string(char *);
int print_unsigned_number(unsigned int);
int *_memcpy(char *dest, char *src, unsigned int in);

#endif
