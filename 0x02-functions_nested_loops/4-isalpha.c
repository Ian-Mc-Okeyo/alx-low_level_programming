#include "main.h"
/**
 * _isalpha - checks whether the argument is a character
 *
 *@c: argumented to be tested
 *
 * Return: 1 if character is lowercase
 * 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}
