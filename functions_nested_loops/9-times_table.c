#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
    int num, product;

    for (num = 0; num <= 9; num++) {
        product = num * 9;

        if (product < 10) {
            if (num != 0) {
                _putchar(' '); 
            }
            _putchar('0' + product);
        } else {
            _putchar('0' + product / 10);
            _putchar('0' + product % 10);
        }

        if (num != 9) {
            _putchar(',');
            _putchar(' ');
        }
    }
    _putchar('\n'); 
}