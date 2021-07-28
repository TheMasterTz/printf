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
}
