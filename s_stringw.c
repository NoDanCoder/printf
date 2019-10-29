#include "holberton.h"

/**
 * s_stringw - Something.
 * @object: Variable.
 * @arg: Variable.
 *
 * Return: Nothing.
 */

void s_stringw(dt *object, __attribute__((unused))va_list arg)
{
	object->data = _strdup("%");
	object->type = 's';
}
