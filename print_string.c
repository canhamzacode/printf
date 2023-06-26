#include "main.h"
/**
 * print_string - Prints a string.
 * @args: The argument that was passed.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char*);
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	write(1, str, len);
}
