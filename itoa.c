#include "holberton.h"

/**
 * _itoa - convert integers into string
 * @value: integer input
 * @sp: buffer where will be allocated the result
 * @radix: baseof number
 *
 * Return: int len
 * on error: -1 ilegal input
 */

int _itoa(int value, char *sp, int radix)
{
	char tmp[16];
	char *tp = tmp;
	int i;
	unsigned int v;
	int len;

	int sign = (radix == 10 && value < 0);

	if (sign)
		v = -value;
	else
		v = (unsigned int)value;

	while (v || tp == tmp)
	{
		i = v % radix;
		v /= radix;
		if (i < 10)
			*tp++ = i + '0';
		else
			*tp++ = i + 'a' - 10;
	}

	len = tp - tmp;

	if (sign)
	{
		*sp++ = '-';
		len++;
	}

	while (tp > tmp)
		*sp++ = *--tp;

	*sp = '\0';

	return (len);
}
