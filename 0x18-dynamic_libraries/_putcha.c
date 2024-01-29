#include "main.h"
#include <unistd.h>

/**
 * _putchar - ...
 * @c: ..
 * Return: ...
 */


int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
