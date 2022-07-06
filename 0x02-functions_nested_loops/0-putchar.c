#include "main.h"
/**
 * main - entry point for the program
 *
 * Return: 0 if successful
 *
 */
int main(void)
{
	char word[8] = "_putchar";

	int length = sizeof(word) / sizeof(char);

	int i;

	for (i = 0; i < length; i++)
		_putchar(word[i]);

	_putchar('\n');

	return (0);
}
