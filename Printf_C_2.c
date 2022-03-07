#include "main.h"

/**
* print_c - prints strings and or characters
* @c: the characters
* Return: 1
*/

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
* print_s - prints strings and or characters
* @s: string
* Return: print the string
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