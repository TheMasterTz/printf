#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list args;
	int (*punt)(va_list);
	int itern, count = 0;

	va_start(args, format);

	for (itern = 0; format[itern] != '\0';)
	{
		while (format[itern] != '%' && format[itern])
		{
			_putchar(format[itern]);
			count++;
			itern++;
		}

		if (format[itern] == NULL)
		{
			return (count);
		}

		punt = get_struct(&format[itern + 1]);

		if (punt != NULL)
		{
			c = c + punt(args);
			itern = itern + 2;
			continue;
		}

		if (format[itern + 1] == NULL)
		{
			return (-1);
		}

		if (format[itern + 1] == '%')
		{
			itern = itern + 2;
		}
		itern++;
	}
}
