#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);

	printf("\n");

	return (0);
}
