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
	r = n % 10;

	_putchar('0' + r);

	return (r);
}
