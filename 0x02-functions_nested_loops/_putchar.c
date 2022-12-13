#include "main.h"
#include <unistd.h>

/**
 * putchar - write the character c for stdout
 * @c: the character to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
