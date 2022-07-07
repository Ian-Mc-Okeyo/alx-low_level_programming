#include <stdio.h>
#include "main.h"
/**
 * main - The FizzBuzz algorithm
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	char word[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			for (j = 0; j < sizeof(word) / sizeof(char); j++)
				_putchar(word[j]);
		}
		else if (i % 5 == 0)
		{
			for (j = 4; j < sizeof(word) / sizeof(char); j++)
				_putchar(word[j]);
		}
		else if (i % 3 == 0)
		{
			for (j = 0; j < 4; j++)
				_putchar(word[j]);
		}
		else
			_putchar(i + '0');
		if (i == 100)
			_putchar(' ');

	}
	_putchar('\n');
	return (0);
}
