#include "main.h"
/**
 * print_uint - pint unsigned int
 * @num data type to print
 */

void print_uint(unsigned int num)
{
    char buffer[20];
    sprintf(buffer, "%i", num);
    write(1, buffer, strlen(buffer));
}
