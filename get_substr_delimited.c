#include "holberton.h"

/**
 * get_substr_delimited - Something.
 * @start: Variable.
 * @end: Variable.
 *
 * Return: section.
 */

char *get_substr_delimited(char *start, char *end)
{
	char *section;
	int diff = end - start;
	int i = 0;

	if (diff == 0)
		return ("\0");

	section = malloc(diff + 1);
	if (!section)
		exit(38);

	for (i = 0; i <= diff; i++)
		section[i] = start[i];

	section[i] = '\0';
	return (section);
}
