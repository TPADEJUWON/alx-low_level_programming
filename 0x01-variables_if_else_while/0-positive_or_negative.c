#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: 'n negative positive'
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf(n, "%s\n:is negative");
}
else if (n == 0)
{
printf(n, "%s\n :is zero");
}
else
{
printf(n, "%s\n : is positive");
}
return (0);
}
