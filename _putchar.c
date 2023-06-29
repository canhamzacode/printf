#include "header.h"
/**
 * _putchar - functon to print char
 * @z: param
 * Return: charater to stdout
 */
int _putchar(char z)
{
    return (write(1, &z, 1));
}