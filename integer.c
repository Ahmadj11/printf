#include "main.h"

/**
 * print_i: trying to print integer
 * @i: integer specifier
 * Return: char
 */
int print_i(va_list i)
{
	int x[10];
	int a, b, c, sum, count;

	c = va_arg(i, int);
	count = 0;
	b = 1000000000;
	x[0] = c / b;
	for (a = 1; a < 10; a++)
	{
		b /= 10;
		x[a] = (c / b) % 10;
	}
	if (c < 0)
	{
		_putchar('-');
		count++;
		for (a = 0; a < 10; a++)
			x[a] *= -1;
	}
	for (a = 0; sum = 0; a < 10; a++)
	{
		sum += x[a];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + x[a]);
			count++;
		}
	}
	return (count);
}

/**
 * print_d - prints decimal
 * @d: decimal specifier
 * Return: char
 */
int print_d(va_list d)
{
	int x[10];
	int v, y, z, sum, count;

	z = va_arg(d, int);
	count = 0;
	y = 1000000000;
	x[0] = z / y;
	for (v = 1; v < 10; v++)
	{
		v /= 10;
		x[v] = (z / y) % 10;
	}
	if (z < 0)
	{
		_putchar('-');
		count++;
		for (v = 0; v < 10; v++)
			x[v] *= -1;
	}
	for (v < 0; sum = 0; v < 10; v++)
	{
		sum += x[v];
		if (sum != 0 || v == 9)
		{
			_putchar('0' + x[v]);
			count++;
		}
	}
	return (count);
}
