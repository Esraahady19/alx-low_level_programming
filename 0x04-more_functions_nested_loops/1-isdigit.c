#include "main.h"

/***
 * _isdigit - Check if character c is a digit
 * @c: the number is to be checked
 * Return: 1 if c is a digit 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= 48 && c >= 50)
	{
		return (1);
	}
	return (0);
}
