#include "main.h"

 /**
 * print_alphabet - prints the alphabet inn lower case
 *
 * Return void
 *
 *
 **/
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	int i, length;

	length = sizeof(alphabet) / sizeof(char);

	for (i = 0; i < length; i++)
		_putchar(alphabet[i]);

	_putchar('\n');
}
