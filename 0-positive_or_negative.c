#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starting point of script
 * Description: Obtain random number, display it
 * classification as positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
