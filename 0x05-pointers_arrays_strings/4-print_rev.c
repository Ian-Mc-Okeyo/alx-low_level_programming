#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length, i;

	length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}

	for (i = length; i >= 0; i--)
		_putchar(*(s + i));
}
