#include <main.h>
/**
 * print_string - prints string
 * @ag: variatic
 * Return: char *
 */
char *print_s(va_list)
{
	char s* = va_arg(ag, char *);

	if(!s)
		return ("(null)");
	return (s);
}
