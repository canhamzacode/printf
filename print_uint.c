#include "main.h"
/**
 * print_uint - print unsigned int
 * @args: argument
 */
void print_uint(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *buffer;

	int size = snprintf(NULL, 0, "%u", num);
	buffer = malloc((size + 1) * sizeof(char));
	
	sprintf(buffer, "%u", num);
	write(1, buffer, strlen(buffer));

	free(buffer);
}
