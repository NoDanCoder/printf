#include "holberton.h"

/**
 * _putchar - Something.
 * @c: Variable.
 *
 * Return: char.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
