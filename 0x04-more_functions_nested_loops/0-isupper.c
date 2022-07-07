#include "main.h"
/**
 * _isupper - checks whether a character is uppercase or not
 *
 * @c: character to be tested
 * Return: 1 if character is uppercase
 * 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
