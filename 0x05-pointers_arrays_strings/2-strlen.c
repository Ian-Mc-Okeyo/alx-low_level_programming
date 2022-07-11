#include "main.h"
/**
 * _strlen - A function to find the length of a string
 * @s: the string to find its length
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}
