#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stout
 *
 * @c: character to print
 *
 * Return: on success 1 on erorr -1 
*/

int _putchar(char c)
{
	return (write(1 , &c, 1));
}
