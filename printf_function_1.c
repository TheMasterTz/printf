#include "holberton.h"

int print_int(va_list args)
{
	int array[10];
	int iter, m = 1000000000, var, sum, count = 0;

	var = va_arg(args, int);
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
			putchar(48 + array[iter]);
			count++;
		}
	}
	return (count);
}
