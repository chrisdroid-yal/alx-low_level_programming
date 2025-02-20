#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 (Always Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i == 'q' || i == 'e')
			continue;
		else
			putchar(i);
	putchar('\n');

	return (0);
}
