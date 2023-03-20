#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
* 
* Description: 'Last Digit'
* 
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n,a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %d\n", n, "is", a, "and is greater than 5");
	}
	else if (a == 0)
	{
		printf("Last digit of %d\n", n, "is", a, "and is 0");
	}
	else if (a < 6 && a != 0)
	{
		printf("Last digit of %d\n", n, "is", a, "and is less than 6 and not 0");
	}
	else
	{
		Printf("Nothing is here");
	}
	return (0);
}
