#include "holberton.h"

/**
 * _printf - Something.
 * @format: Variable.
 *
 * Return: lenght..
 */
int _printf(const char *format, ...)
{
	char flag = '%';
	char *output;
	int out = 0, i = 0, len;
	va_list args;

	va_start(args, format);
	output = create_buffer();

	if (!format)
		return (-1);
	while (format && format[i])
	{
		if (format[i] == flag)
			if (format[i + 1])
			{
				concat_flag((char) format[i + 1], output, args);
				i++;
			}
			else
			{
				out  = -1;
			}

		else if (format[i] != flag)
			_strncat(output, (char *) &format[i], 1);

		i++;
		if (i == 1024)
		{
			write(1, output, 1024);
			free_buffer(output, 1024);
			*output = '\0';
		}
	}
	len = _strlen(output);
	write(1, output, len);
	free_buffer(output, len);
	free(output);
	va_end(args);
	return ((out == -1) ? -1 : len);
}
