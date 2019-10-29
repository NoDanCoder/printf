#include "holberton.h"

/**
 * number_of_flags - Something.
 * @inp: Variable.
 * @flag: Variable.
 *
 * Return: inp, flag.
 */

int number_of_flags(char *inp, char flag)
{
	if (!inp || !*inp)
		return (0);
	if (*inp == flag)
		return (1 + number_of_flags(inp + 2, flag));
	else
		return (number_of_flags(inp + 1, flag));
}
