#include "main.h"

/**
 * print_char - Prints a character.
 * @ch: The character to be printed.
 */
void print_char(const int ch)
{
    write(1, &ch, 1);
}