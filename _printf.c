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
	int count = 0;

	va_list args;

	va_start(args, format);
	const char *ptr = format;

	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			count++;
			handle_format_specifier(*ptr, args);
		}
		else
		{
			write(1, ptr, 1);
		}
		count++;
		ptr++;
	}
	va_end(args);
	return (count);
}
