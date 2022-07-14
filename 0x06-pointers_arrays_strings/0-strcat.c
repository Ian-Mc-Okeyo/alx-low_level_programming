#include "main.h"
/**
 * _strcat- prints all the alphabet in small letters
 * @dest: string to be conccatenated to
 * @src: soure string
 *
 * Return: string pinter
 */
char *_strcat(char *dest, char *src)
{
	int i, j, length, newLength;

	length = 0;

	while (*(dest + length) != '\0')
		length++;

	newLength = length;

	while (*(dest + length) != '\0')
		newLength++;

	j = 0;

	for (i = length; i < newLength; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
