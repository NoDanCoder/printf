#include "holberton.h"

/**
 * print_number - Something.
 * @inp: Variable.
 *
 * Return: inp.
 */

void print_number(long inp)
{
	if (inp < 0)
	{
		_putchar('-');
		inp = -inp;
	}
	if (inp / 10)
		print_number(inp / 10);
	_putchar((inp % 10) + '0');
}
