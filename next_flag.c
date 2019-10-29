#include "holberton.h"

/**
 * next_flag - Something.
 * @str: Variable.
 * @flag: Variable.
 *
 * Return: str.
 */

char *next_flag(char *str, char flag)
{
	for (; *str != flag; str++)
		if (!*str)
			return (str);

	return (str - 1);
}
