#include "holberton.h"

/**
 * create_buffer - Something.
 * @normalWords: Variable.
 * @items: Variables.
 * @elements: Variable.
 *
 * Return: buffer.
 */

char *create_buffer(char **normalWords, int items, dt *elements)
{
	int i = 0;
	char *buffer = malloc(1024 * sizeof(char));

	if (!buffer)
		exit(56);

	*buffer = '\0';

	_strncat(buffer, normalWords[0], _strlen(normalWords[0]));

	for (i = 0; i < items; i++)
	{
		_strncat(buffer, elements[i].data, _strlen(elements[i].data));
		_strncat(buffer, normalWords[i + 1], _strlen(normalWords[i + 1]));
	}

	return (buffer);
}
