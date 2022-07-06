#include "main.h"
/**
 * _print_sign - checks the sign of a character
 *
 *@n: character to be tested
 *
 * Return: 1 if character is lowercase
 * 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
