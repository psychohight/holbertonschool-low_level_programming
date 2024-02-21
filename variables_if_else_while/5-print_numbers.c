#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
* main - 0 a 10
*
* Return: Always 0 (Success)
*/

int main (void)
{
    int n;

    for(n = '0'; n <= '9'; n++)
        putchar(n);

    putchar('\n');

    return(0);
}