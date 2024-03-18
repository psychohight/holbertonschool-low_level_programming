#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int find_sqrt(int num, int root)
{
    if (root * root == num)
        return (root);
    
    if (root * root > num)
        return (-1);
    
    return (find_sqrt(num, root + 1));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);

    return (find_sqrt(n, 0));
}