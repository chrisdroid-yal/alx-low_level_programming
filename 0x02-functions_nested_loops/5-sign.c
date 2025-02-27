#include "main.h"

/**
 * print_sign - checks for the sign of a number
 * @n: number to be checked
 *
 * Return: 1 if n > 0
 *         0 if n is 0
 *         -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
