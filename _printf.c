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
	}
}
