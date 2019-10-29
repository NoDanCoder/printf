#include "holberton.h"

/**
 * s_string - Something.
 * @object: Variable.
 * @arg: Variable.
 *
 * Return: Nothing.
 */

void s_string(dt *object, va_list arg)
{
	char *process = _strdup(va_arg(arg, char *));

	object->data = (!process) ? _strdup("(null)") : process;
	object->type = 'd';
}
