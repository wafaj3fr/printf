#include "main.h"

/**
 * print_b - Print an unsigned integer in binary format
 * @list: The va_list containing the unsigned integer to print
 * Return: The number of characters printed
 */

int print_b(va_list list)
{
	char dc;
	unsigned int len, t, j, digit, b, num;
	int count = 0;

	b = va_arg(list, unsigned int);
	if (b != 0)
	{
		num = b;
		len = 0;

		while (num != 0)
		{
			num /= 2;
			len++;
		}
		t = 1;
		for (j = 1; j <= len - 1; j++)
			t *= 2;
		for (j = 1; j <= len; j++)
		{
			digit = b / t;
			dc = '0' + digit;
			write(1, &dc, 1);
			count++;
			b -= digit * t;
			t /= 2;
		}
	}
	else
	{
		write(1, "0", 1);
		return (1);
	}
	return (count);
}
