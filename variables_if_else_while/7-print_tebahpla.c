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

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);

	printf("\n");

	return (0);
}
