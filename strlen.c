#include "holberton.h"

unsigned int _strlen(char *s)
{
    return ((!s || !*s) ? 0 : 1 + _strlen(s + 1));
}
