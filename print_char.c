#include "main.h"

/**
 * print_char - Prints a character.
 * @args: The character to be printed.
 */
void print_char(va_list args)
{
	int ch = va_arg(args, int);
	write(1, &ch, 1);
}
