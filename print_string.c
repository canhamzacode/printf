#include "main.h"
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