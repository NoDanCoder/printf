#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

char *_strncat(char *dest, char *src, int n);
unsigned int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
char *create_buffer(void);
void free_buffer(char *buffer, int len);
void *_intdup(int str);
void concat_flag(char type, char *dest, va_list list);
int _printf(const char *format, ...);
int _itoa(int value, char *sp, int radix);

#endif /* HOLBERTON_H */
