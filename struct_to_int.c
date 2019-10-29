#include "holberton.h"

/**
 * struct_to_int - Something.
 * @object: Variable.
 * @arg: Variable.
 *
 * Return: Nothing.
 */

void struct_to_int(dt *object, va_list arg)
{
	object->data = _intdup(va_arg(arg, int));
	object->type = 'd';
}
