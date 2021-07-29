#include "holberton.h"

/**
 * _printf - prints everything the normal printf prints
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int (*punt)(va_list);
	unsigned int itern, c = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(args, format);

	for (itern = 0; format[itern] != '\0';)
	{
		while (format[itern] != '%' && format[itern])
		{
			putchar(format[itern]);
			c++;
			itern++;
		}

		if (!format[itern])
			return (c);

		punt = get_struct(&format[itern + 1]);

		if (punt != NULL)
		{
			c = c + punt(args);
			itern = itern + 2;
			continue;
		}

		if (!format[itern + 1])
			return (-1);

		if (format[itern + 1] == '%')
	        	itern = itern + 2;

		itern++;
	}
	va_end(args);
	return (c);
}
