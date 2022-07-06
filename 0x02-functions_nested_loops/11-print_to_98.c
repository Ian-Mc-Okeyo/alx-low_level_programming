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

	if (n < 1)
		n = 1;

	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
	_putchar('\n');

}
