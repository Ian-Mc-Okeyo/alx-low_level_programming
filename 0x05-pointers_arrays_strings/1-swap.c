#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: The first integer to be swapped
 *
 * @b: The second integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
