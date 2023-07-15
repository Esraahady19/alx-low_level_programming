#include <stdio.h>

/**
 * main - entry point
 *
 * return: always 0 (success)
*/

int main(void)
{
	printf("size of a char: %d byts(s)", sizeof (char));
        printf("size of an int: %d byts(s)", sizeof (int));
        printf("size of a long int: %d byts(s)", sizeof (long int));
        printf("size of a long long int: %d byts(s)", sizeof (long long int));
        printf("size of a float: %d byts(s)", sizeof (float));
        return (0);
}	
