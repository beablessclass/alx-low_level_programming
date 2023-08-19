#include "main.h"

/**
 * print_last_digit - printsthelast digit of a number
 * @n: the int toextract thelast digit from
 * Return: value ofthe lastdigit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
