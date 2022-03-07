#include "main.h"
#include <unistd.h>

/**
* _putchar - prints char
* @c: char
* Return: Always 0
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
