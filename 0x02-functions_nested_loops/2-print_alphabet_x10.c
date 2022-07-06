#include "main.h"
/**
 * print_alphabet_x10 - prints all the alphabet in small letters 10 times
 * users only putchar
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	int i, k, length;

	length = sizeof(alphabet) / sizeof(char);

	for (k = 0; k < 10; k++)
	{
		for (i = 0; i < length; i++)
		{
			_putchar(alphabet[i]);

		}
		_putchar('\n');

	}
}
