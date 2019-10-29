#include "holberton.h"

/**
 * _printf - Something.
 * @format: Variable.
 *
 * Return: lenght..
 */

int _printf(const char *format, ...)
{
	dt *elements;
	int usrFlags;
	char *buffer;
	char *typeFlags;
	char **normalWords;
	char flag = '%';

	exisDT flagOpts[] = {
		{'c', s_char},
		{'s', s_string},
		{'w', s_stringw},
		{'d', struct_to_int},
		{'i', struct_to_int}
	};

	int lenFlagOps = sizeof(flagOpts) / sizeof(flagOpts[0]);
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	usrFlags = number_of_flags((char *) format, flag);
	typeFlags = get_identifiers((char *) format, flag, flagOpts, lenFlagOps);
	if (!_strcmp(typeFlags, "-1"))
		return (-1);

	elements = get_variadic_values(usrFlags, args, typeFlags, flagOpts,
				       lenFlagOps);
	normalWords = get_normal_words((char *) format, usrFlags, flag);
	buffer = create_buffer(normalWords, usrFlags, elements);
	_put_str(buffer);
	free_grid_char(normalWords, usrFlags + 1);
	free(elements);
	va_end(args);
	return (_strlen(buffer));
}
