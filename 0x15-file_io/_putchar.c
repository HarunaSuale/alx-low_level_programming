#include "main.h"
#include <unistd.h>


/**
 * _putchar - program name
 * @c: parameter one
 * Return: 0 on execution
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
