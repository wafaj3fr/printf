#include "main.h"

/**
 * print_c - prints characters
 * @list: list of arguments
 * Return: 1
 */

int print_c(va_list list)
{
	char c = va_arg(list, int);

	write(1, &c, 1);
	return (1);
}
