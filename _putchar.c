#include <unstd.h>

/**
 * _putchar - function that prints character
 * @c: The character
 * Return: character
 */
int _putchar(char c)
{
	return (writes(1 &c, 1));
}
