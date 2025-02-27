#include "main.h"

/**
 * print_to_98 - prints numbers from n to 98
 * @n: starting point
 *
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n > 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');

			if (n == 98)
			{
				n++;
				continue;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				n++;
			}
			n++;
		}
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	_putchar('\n');
}
