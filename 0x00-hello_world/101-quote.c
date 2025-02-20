#include <unistd.h>

/**
 * main - Entry point of my program
 *
 * Return: 1 because the program exits in stderr
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
