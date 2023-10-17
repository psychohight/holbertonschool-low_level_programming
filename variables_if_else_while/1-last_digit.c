#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;
	int decimal;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int decimal = n % 10;

	if ( decimal > 5 )
	printf ("%d and is greater than 5\n", decimal);

	if ( decimal == 0)
	printf ("%d and si 0\n", decimal);

	else if ( decimal < 6 )
	printf ("%d and is less than 6 and not 0\n", decimal);

	return (0);
}
