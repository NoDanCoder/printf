#include "holberton.h"
/**
 * create_buffer - Create a buffer
 * Return: The bufer
 *
 */
char *create_buffer(void)
{
	char *buffer = malloc(1024);

	if (!buffer)
		exit(30);

	*buffer = '\0';

	return (buffer);
}
