#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>
int _printf(const char *format, ...);
void print_string(const char *str);
void print_char(const int ch);
void print_int(const int num);
void print_uint(unsigned int num);

#endif