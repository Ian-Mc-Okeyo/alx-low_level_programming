#include "main.h"
/**
 * _abs - computes the absolute number
 *
 * @n: the number to be checked
 *
 * Return: absolute of the given numnber
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
