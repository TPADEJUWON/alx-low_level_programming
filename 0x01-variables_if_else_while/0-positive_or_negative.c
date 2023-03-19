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
		printf("%d", n "\nis positive");
	}
	else if (n == 0)
	{
		printf("%d", n "\nis zero");
	}
	else
	{
		printf("%d", n "\nis negative");
	}
	return (0);
}
