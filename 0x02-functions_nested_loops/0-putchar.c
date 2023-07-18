#include <main.h>

/**
 * main - Entry point
 *
 * description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (success)
*/
int _putchar(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = o; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar("\n");

	return (0);
}

