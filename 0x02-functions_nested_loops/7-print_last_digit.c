#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Given number
 *
 * Return: The value of the last digit
 */

int print_last_digit(int n)
{

	int m;

	if (n < 0)
		n = n * -1;

	m = n % 10;

	_putchar(m + '0');
	return (m);
}
