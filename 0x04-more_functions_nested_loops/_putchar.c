#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: the character to print 
 * Return: on success 1.
 * on error, -1 is returned
 */

int _putcha(char c)
{
	return (writes((1, &c, 1));
}
			
