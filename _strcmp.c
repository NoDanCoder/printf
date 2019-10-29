#include "holberton.h"

/**
 * _strcmp - compare two words char by char if one is diferent
 * return the diference between them chars
 * @s1: first string "a"
 * @s2: second string "b"
 *
 *
 * Return: diference between chars or 0 if is equal
 * On error: -1 inapropiate entry
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int equal = 0;

	for (i = 0; (*(s1 + i) || *(s2 + i)) && !equal; i++)
		if (*(s1 + i) != *(s2 + i))
			equal = *(s1 + i) - *(s2 + i);

	return (equal);
}
