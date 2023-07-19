#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: the number to be comuted.
 *
 * Return: absolute value of number or zero
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
