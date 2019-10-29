#include "holberton.h"

/**
 * _strcpy - Something.
 * @dest: Variable.
 * @src: Variable.
 *
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	*(dest + i) = *(src + i); /* adding '\0' character */
	return (dest);
}
