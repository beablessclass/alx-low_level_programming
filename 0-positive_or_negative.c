#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    n = 0;

    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else
        printf("%d is negative\n", n);

    return (0);
}
