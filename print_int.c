#include "main.h"
#include <stdio.h> // Include this header for the sprintf function

/**
 * print_int - function to print an integer
 * @num: The number to be printed
 */

void print_int(const int num)
{
    char buffer[20];
    sprintf(buffer, "%d", num);
    write(1, buffer, strlen(buffer));
}