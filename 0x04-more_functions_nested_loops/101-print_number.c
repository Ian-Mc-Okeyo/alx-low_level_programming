#include "main.h"
/**
 * print_number - prints integers
 * @n: the integer to be printed
 *
 * Returns: void
 */
void print_number(int n)
{
	int x;

	x = n / 10;
	if (x != 0)
	{
		print_number(x);
		_putchar((x % 10) + '0');
	}
}
