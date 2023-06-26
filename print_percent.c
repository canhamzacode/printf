#include "main.h"
/**
 * print_percentage - function to print oercentage
 * @args: argument
 */
void print_percent(va_list args)
{
	(void)args;
	write(1, "%", 1);
}
