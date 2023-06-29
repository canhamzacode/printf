#include "main.h"

/**
 * _printf - Prints formatted output.
 * @format: The format string.
 * @...: Additional arguments.
 *
 * Return: The number of characters printed.
 */
int my_printf(const char *format, ...)
{
    unsigned a = 0, mycount = 0;
    va_list args;
    va_start(args, format);

    for (a; format[a] != '\0'; a++)
    {
        if (format[a] != '%')
        {
            _putchar(format[a]);
        }
        else if (format[a] == '%')
        {
            if (format[a + 1] == 'c')
            {
                _putchar(va_arg(args, int));
                a++;
            }
            else if (format[a + 1] == 's')
            {
                int r_val = print_string(va_arg(args, const char *));
                a++;
                mycount += (r_val - 1);
            }
            else if (format[a + 1] == '%')
            {
                _putchar('%');
                a++;
            }
            else if ((format[a + 1] == 'd') || format[a + 1] == 'i')
            {
                print_int(va_arg(args, int));
                a++;
            }
        }
        mycount++;
    }
    return (mycount);
}