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
				printf("%d", i);
			else
				printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d", i);
			else
				printf("%d, ", i);
		}
	}
	_putchar('\n');
}
