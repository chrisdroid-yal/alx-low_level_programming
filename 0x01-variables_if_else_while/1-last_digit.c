#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	char *o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
		o = "and is greater than 5";
	else if (n == 0)
		o = "and is 0";
	else if (n < 6 && n != 0)
		o = "and is less than 6 and not 0";
	printf("Last digit of %i is %i %s\n", n, n % 10, o);
	return (0);
}
