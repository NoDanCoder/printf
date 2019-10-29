#include "holberton.h"
/**
 * free_buffer - Create a buffer
 * @buffer: Buffer
 * @len: len of the buffer
 * Return: The bufer
 *
 */
void free_buffer(char *buffer, int len)
{
	int i;

	for (i = 0; i < len; i++)
		buffer[i] = 0;
	free(buffer);
}
