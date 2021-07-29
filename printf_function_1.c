#include "holberton.h"

/**
 * print_int - prints an integer to standard output.
 * @args: list of variadic function.
 *
 * Return: restituisce il numero di caratteri
 */

int print_int(va_list i)
{
	int array[10];
	int iter, m = 1000000000, var, sum, count = 0;

	var = va_arg(i, int);
	array[0] = var / m;

	for (iter = 1; iter < 10; iter++)
	{
		m = m / 10;
		array[iter] = (var / m) % 10;
	}

	if (var < 0)
	{
		count++;
		_putchar(45);

		for (iter = 0; iter < 10; iter++)
		{
			array[iter] = array[iter] * -1;
		}
	}

	for (iter = 0, sum = 0; iter < 10; iter++)
	{
		sum = sum + array[iter];
		if (sum != 0 || iter == 9)
		{
			_putchar(48 + array[iter]);
			count++;
		}
	}
	return (count);
}
