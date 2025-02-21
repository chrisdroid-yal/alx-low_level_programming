#include "main.h"

/**
 * _islower - Checks for a lowercase character
 * @c: Character to be checked
 *
 * Return: 1 if @c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
