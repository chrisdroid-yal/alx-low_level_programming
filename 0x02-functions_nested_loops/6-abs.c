#include "main.h"

/**
 * _abs - Returns the absolute value of a number
 * @n: given number
 *
 * Return: The absolute value of @n
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
