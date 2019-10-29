#include "holberton.h"
/**
 * concat_flag - Create a buffer
 * @dest: Buffer
 * @type: len of the buffer
 * @list: list
 * Return: Nothing
 *
 */
void concat_flag(char type, char *dest, va_list list)
{
	char *s = _strdup("\0");

	switch (type)
	{
	case 'c':
		s = _intdup(va_arg(list, int));
		_strncat(dest, s, 1);
		break;
	case 's':
		s = _strdup(va_arg(list, char *));
		s = (!s) ? "(null)" : s;
		_strncat(dest, s, _strlen(s));
		break;
	case '%':
		s = _strdup("%");
		_strncat(dest, s, 1);
		break;
	default:
		_strncat(s, "%", 1);
		_strncat(s, &type, 1);
		_strncat(dest, s, 2);
	}

	free(s);
}
