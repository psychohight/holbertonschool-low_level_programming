#include <stdio.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int print_fizzbuzz (void)
{
    int n;

    for (n = 1 ; n <= 100 ; n++)
    {    
        if (n % 3 == 0)
            printf("Fizz ");

        else if (n % 5 == 0)
            printf("Buzz ");

        else if (n % 15 == 0)
            printf("FizzBuzz ");

        else
            printf("%d ", n);
    }

    printf("\n");
    return(0);
}


int main(void)
{
    print_fizzbuzz();
    return 0;
}