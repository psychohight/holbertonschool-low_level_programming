#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
* main - alphabet
*
* Return: Always 0 (Success)
*/

int main (void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
        putchar(c);
    putchar('\n');

    return(0);
}