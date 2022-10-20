#include "main.h"

/**
 *rev_string - reverse that string
 *@s: the string
 *Return: the reversed string
 */
char *rev_string(char *s)
{
	int head;
	int len;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);

	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);

	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}

/**
 *write_base - sends characters to be written on standard output
 *@str: string to execute
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		write_char(str[i]);
}

/**
 *_memcpy - copy memory area
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to copy
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = sre[i];
	dest[i] = '\0';
	return (dest);
}

/**
 *print_reversed - calls a function to reverse and print a string
 *@arg: argument passed to the function
 *Return: the amount of characters printed
 */
int print_reversed(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);

	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);

	for (len = 0l ptr[len] != '\0'; len++)
		write_char(ptr[len]);

	free(ptr);
	return (len);
}

/**
 *rot13 - Converts string to rot13
 *@list: string to convert
 *Return: the manipulated string
 */
int rot13(va_list list)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				write_char(u[x]);
				break;
			}
		}
		if (x == 53)
			write_char(str[i]);
	}
	return (i);
}
