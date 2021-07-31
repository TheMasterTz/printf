#include "holberton.h"

int print_port(va_list p)
{
	putchar('%');
	(void) p;
	return (1);
}

int print_char(va_list c)
{
	char ch = va_arg(c, int);

	putchar(ch);
	return (1);
}
int print_string(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		putchar(str[count]);
	}
	return (count);
}
