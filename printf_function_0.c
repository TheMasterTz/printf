#include "holberton.h"

/**
 * print_port - prints the % sign.
 * @p: laundry list.
 *
 * Return: returns 1
 */
int print_port(va_list p)
{
	_putchar('%');
	(void) p;
	return (1);
}
/**
 * print_char - prints the indicated character in ASCII.
 * @c: laundry list.
 *
 * Return: returns 1.
 */
int print_char(va_list c)
{
	char ch = va_arg(c, int);

	_putchar(ch);
	return (1);
}
/**
 * print_string - character string (ending in '\0')
 * @s: laundry list.
 *
 * Return: returns the number of characters.
 */
int print_string(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
