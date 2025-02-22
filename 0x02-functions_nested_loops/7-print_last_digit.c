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

	m = n % 10;

	if (m < 0)
		m = -m;

	_putchar(m + '0');
	return (m);
}
