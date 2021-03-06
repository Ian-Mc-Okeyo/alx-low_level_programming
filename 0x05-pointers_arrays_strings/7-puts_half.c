#include "main.h"
/**
 * puts_half - prints the last half of a string
 *
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, length;

	length = 0;

	while (*(str + length) != '\0')
		length++;
	if (length % 2 == 0)
	{
		for (i = (length / 2); i < length; i++)
			_putchar(*(str + i));
	}
	else
	{
		for (i = ((length - 1) / 2) + 1; i < length; i++)
			_putchar(*(str + i));
	}
	_putchar('\n');
}
