#include "main.h"

/**
 * _isalpha - Checks if character is a letter both lowercase or uppercase
 *
 * @c: takes input from other functions
 *
 * Return: returns 1 for alphabtic charcater otherwise  return 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
