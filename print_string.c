#include "header.h"
/**
 * print_string - Prints a string.
 * @str: The string to be printed.
 */
int print_string(const char *str)
{
    int length = 0, i = 0;
    if (str)
    {
        while (str[i] != '\0')
        {
            _putchar(str[i]);
            length++;
            i++;
        }
    }
    return (length);
}