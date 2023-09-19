#include "main.h"

int print_n(va_list list)
{
	int n = va_arg(list, int);
	int count = 0;
	int i;
	int temp;
	int num_digits;

	/* Handle negative numbers */
	if (n < 0)
       	{
		write(1, "-", 1);
		n = -n;
		count++;
	}


	/* Calculate the number of digits in n */
	num_digits = 1;

	while (temp >= 10)
       	{
		temp /= 10;
		num_digits++;
	}


	/* Extract and print each digit */
	for (i = 0; i < num_digits; i++)
       	{
		int digit = n % 10;
		char digit_char = '0' + digit;
		write(1, &digit_char, 1);
		n /= 10;
		count++;
	}

	return count;
}
