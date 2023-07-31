#include "main.h"

/**
 * _strchr - locate a character in a string.
 * @s: the string to be searched.
 * @c: character to be located.
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
