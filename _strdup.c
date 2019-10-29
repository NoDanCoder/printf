#include "holberton.h"

/**
 * _strdup - Something.
 * @str: Variable.
 *
 * Return: arr.
 */

char *_strdup(char *str)
{
	char *arr;

	if (!str)
		return (NULL);

	arr = malloc((_strlen(str) * sizeof(*arr)) + 1);

	if (!arr)
		return (NULL);

	_strcpy(arr, str);
	return (arr);
}
