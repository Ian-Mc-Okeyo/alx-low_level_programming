#include "main.h"
/**
 * print_last_digit - returns the last digit of a number
 *
 * @n: integer to be checked
 *
 * Return: absolute value of an integer
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
		r = -r;

	_putchar('0' + r);

	return (r);
}
