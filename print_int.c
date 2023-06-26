#include "main.h"

/**
 * print_int - function to print an integer
 * @num: The number to be printed
 */

void print_int(va_list args)
{
	int num = va_arg(args, int);
	char *buffer;

	int size = snprintf(NULL, 0, "%d", num);
	buffer = malloc((size + 1) * sizeof(char));

	sprintf(buffer, "%d", num);
	write(1, buffer, strlen(buffer));

	free(buffer);
}
