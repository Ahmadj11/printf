#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct print - fucntion being used
 * @a: first parameter
 * @b: second parameter
 */

typedef struct printf
{
	int (*b)(va_list);
	char *a;
}

typedef struct printf


int _printf(const char *format, ...)

int print_d(va_list);
int print_c(va_list);
int print_i(va_list);
int print_s(va_list);
int _putchar(char c);
int _printf(const char *format, ...);

#endif /* MAIN_H */
