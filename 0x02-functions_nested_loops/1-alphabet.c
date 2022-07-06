#include "main.h"

/**
 * print_alphabet - prints all the alphabet in small letters
 * users only putchar
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	int i, length;

	length = sizeof(alphabet) / sizeof(char);

	for (i = 0; i < length; i++)
		_putchar(alphabet[i]);

	_putchar('\n');
}
