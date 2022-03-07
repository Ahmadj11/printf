#include <unistd.h>
#include "main.h"

/**
 * _putchar - function that prints characters
 * @c: The character
 * Return: Always 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
