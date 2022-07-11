#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, strlen;

	i = 0;
	strlen = 0;
	while (s[i] != '\0')
	{
		strlen++;
		i++;
	}
	char new[strlen];

	while (strlen > 0)
	{
		news[i] = s[strlen - 1];
		strlen--;
		i++;
	}
	*s = new;
}
