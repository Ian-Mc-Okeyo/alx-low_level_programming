#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - prints all natural numbers upto 98
 *
 * @n: integer to be checked
 *
 * Return: absolute value of an integer
 */
void print_to_98(int n)
{
	int i;

	scanf("%d", &n);
	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				if (i > 9)
				{
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}
				else
				{
					_putchar(i + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				if (i > 9)
				{
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}
				else
				{
					_putchar(i + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
