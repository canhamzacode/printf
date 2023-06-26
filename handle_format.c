#include "main.h"
/**
 * handle_format_specifier - funtion to handle the specifier
 * @specifier: specifier
 * @args: argument to be printed
 * Return: nothing
 */


void handle_format_specifier(char specifier, va_list args)
{
	static const FormatSpecifier specifiers[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'i', print_uint},
		{'%', print_percent}
	};
	size_t num_specifiers = sizeof(specifiers) / sizeof(specifiers[0]);

	for (size_t i = 0; i < num_specifiers; i++)
	{
		if (specifiers[i].specifier == specifier)
		{
			specifiers[i].handler(args);
			return;
		}
	}
}
