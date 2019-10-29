#include "holberton.h"

/**
 * s_char - Something.
 * @object: Variable.
 * @arg: Variable.
 *
 * Return: Nothing.
 */

void s_char(dt *object, va_list arg)
{
	object->data = _intdup(va_arg(arg, int));
	object->type = 'c';
}
