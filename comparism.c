#include "main.h"

void print_string(const char *str);

/**
 * print_string - Prints a string.
 * @str: The string to be printed.
 */
void print_string(const char *str)
{
    if (str != NULL)
    {
        int length = strlen(str);
        write(1, str, length);
    }
}

/**
 * print_char - Prints a character.
 * @ch: The character to be printed.
 */
void print_char(const int ch)
{
    write(1, &ch, 1);
}

/**
 * _printf - Prints formatted output.
 * @format: The format string.
 * @...: Additional arguments.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
    int i = 0;
    va_list args;
    va_start(args, format);

    const char *ptr = format;
    while (*ptr != '\0')
    {
        if (*ptr == '%')
        {
            ptr++;
            if (*ptr == 's')
            {
                print_string(va_arg(args, const char *));
            }
            else if (*ptr == 'c')
            {
                print_char(va_arg(args, int));
            }
            else if (*ptr == '%')
            {
                write(1, "%", 1);
            }
        }
        else
        {
            write(1, ptr, 1);
        }

        ptr++;
        i++;
    }

    va_end(args);

    return i;
}
