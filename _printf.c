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
	int i = 0;
	int len;
	va_list args;

	va_start(args, format);
	output = create_buffer();

	if (!format)
		return (-1);
	while (format && format[i])
	{

		if (format[i] == flag)
		{
			if (format[i + 1])
			{
				concat_flag((char) format[i + 1], output, args);
				i++;
			}
			else
				return (-1);
		}
		else if (format[i] != flag)
		{
			_strncat(output,(char *) &format[i], 1);
		}
		i++;
	}
	len = _strlen(output);
	write(1, output, len);
	free_buffer(output, len);
	va_end(args);
	return (len);
}
