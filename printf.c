#include "main.h"

/**
 * _specifiers - checks format specifier
 * @format: format specifier being used
 * _specifiers - funtion being used
 * @format: specifier ?
 * Return: pointer or NULL
 */

static int (*_specifiers(const char *format))(va_list)
{
	unsigned int a;
	print_a p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{NULL, NULL}
	};

	for (a = 0; p[a].y != NULL; a++)
	{
		if (*(p[a].y) == *format)
		{
			break;
		}
	}
	return (p[a].z);
}

/**
 * _printf - prints strings characteres etc
 * @format: arguments ?
 * Return: characters
 */

int _printf(const char *format, ...)
{
	unsigned int a = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[a])
	{
		for (; format[a] != '%' && format[a]; a++)
		{
			_putchar(format[a]);
			count++;
		}
		if (!format[a])
			return (count);
		f = _specifiers(&format[a + 1]);
		if (f != NULL)
		{
			count += f(valist);
			a += 2;
			continue;
		}
		if (!format[a + 1])
			return (-1);
		_putchar(format[a]);
		count++;
		if (format[a + 1] == '%')
			a += 2;
		else
			a++;
	}
	va_end(valist);
	return (count);
}
