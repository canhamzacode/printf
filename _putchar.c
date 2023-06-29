#include "header.h"
/**
 * _putchar - print char
 * @z: param
 * Ceturn: char
 */

int _putchar(char z)
{
    return (write(1, &z, 1));
}