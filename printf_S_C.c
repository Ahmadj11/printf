#include "main.h"

/**
* print_c - prints characters
* @c: chars to print
* Return: 1
*/

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
* print_s - function being used
* @s: string
* Return: string printed
*/

int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
	str = "(null)";
	for (count = 0; str[count]; count++)
	{
	_putchar(str[count]);
	}
	return (count);
}
