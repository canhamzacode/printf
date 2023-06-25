#include "main.h"

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
