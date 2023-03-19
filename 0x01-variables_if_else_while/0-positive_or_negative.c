#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
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
std::cout << n + ": is negative" << std::endl;
}
else if (n == 0)
{
std::cout << n + ": is zero" << std::endl;
}
else
{
std::cout << n + ":is positive" << std::endl;
}
return (0);
}
