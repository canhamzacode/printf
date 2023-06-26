#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
typedef struct {
    char specifier;
    void (*handler)(va_list args);
} FormatSpecifier;
void handle_format_specifier(char specifier, va_list args);
int _printf(const char *format, ...);
void print_string(va_list args);
void print_char(va_list args);
void print_int(va_list args);
void print_uint(va_list args);
void print_percent(va_list args);

#endif
