#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
* main - tebahpla
*
* Return: Always 0 (Success)
*/

int main (void)
{
    char c;

    for (c = 'z'; c >= 'a'; c--)
        putchar(c); 

    putchar('\n');

    return(0);
}