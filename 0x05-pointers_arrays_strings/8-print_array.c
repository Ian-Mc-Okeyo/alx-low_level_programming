#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array
 *
 * @n: number of elements to be printed
 * @a: the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n-1)
			printf(", ");
	}
}
