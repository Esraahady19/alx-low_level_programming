#include <stdio.h>

/**
 * main - print the alphabets
 *
 * Return Always 0 (success)
*/

int main()
{
    for(int x = 'A'; x <= 'Z'; x++)
    {
        x = tolower(x);
        putchar(x);
    }
    return 0;
}
