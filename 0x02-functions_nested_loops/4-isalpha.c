#include "main.h"

/**
 * _isalpha - Checks for an alphabetic character
 * @c: Character to be checked
 *
 * Return: 1 if @c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}


	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}
