#include "main.h"

/**
 * hex_print - prints ascii value
 * @v: character/value
 * Return: value
 */

static int print_i(char c)
{
	int val;
	char diff = 'A' - ':';
	char d[2];

	d[0] = v / 16;
	d[1] = v % 16;
	for (val = 0; val < 2; val++)
	{
		if (d[val] >= 10)
			_putchar('0' + diff + d[val]);
		else 
			_putchar('0' + d[val]);
	}
	return (val);
}
