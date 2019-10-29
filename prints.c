#include "holberton.h"

int _putchar(char c)
{
    return (write(1, &c, 1));
}

void _put_str(char *s)
{
    if (!*s)
        return;

    _putchar(*s);
    _put_str(s + 1);
}

void print_number(long inp)
{
    if (inp < 0) {
        _putchar('-');
        inp = -inp;
    }
    if (inp / 10)
        print_number(inp / 10);
    _putchar((inp % 10) + '0');
}
