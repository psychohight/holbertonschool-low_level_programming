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
	int dernier;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int dernier = n % 10;

	if ( dernier > 5 )
	printf ("last digit of %d is %d and is greater than 5\n", n, dernier);

	else if ( dernier == 0)
	printf ("last digit of %d is %d and si 0\n", n, dernier);

	else ( dernier < 6 )
	printf ("last digit of %d is %d and is less than 6 and not 0\n", n, dernier);

	return (0);
}
