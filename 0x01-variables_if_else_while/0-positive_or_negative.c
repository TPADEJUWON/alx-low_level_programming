#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
* 
* Description: 'Negative Positive'
* 
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("n is possitive : %d\n", n);
	}
	else if (n == 0)
	{
		printf(" n is zero: %d\n", n);
	}
	else
	{
		printf("n is negative : %d\n", n);
	}
	return (0);
}
