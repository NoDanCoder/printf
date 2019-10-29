#include "holberton.h"

/**
 * _put_str - Something.
 * @s: Variable.
 *
 * Return: s.
 */

void _put_str(char *s)
{
	if (!*s)
		return;

	_putchar(*s);
	_put_str(s + 1);
}
