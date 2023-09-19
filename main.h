#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * struct format - format struct
 * @f_spec: format specifier
 */

typedef struct format
{
	char *f_spec;
	int (*f)(va_list);
} spec;

int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);
int print_n(va_list list);

#endif
