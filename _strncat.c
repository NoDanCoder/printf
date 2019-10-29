#include "holberton.h"

/**
 * _strncat - Something.
 * @dest: Variable.
 * @src: Variable.
 * @n: Variable.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int count = 0;

	for (i = 0; *(dest + i); i++)
		count++;

	for (i = 0; *(src + i) && i < n; i++)
		*(dest + count + i) = *(src + i);

	*(dest + count + i) = 0;
	return (dest);
}
