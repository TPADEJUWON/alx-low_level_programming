#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * main - Entry point of the program
 *
 * Return: 0 if program executes successfully
 */
int main(void)
{
srand(time(0));
int n = rand() % RAND_MAX - RAND_MAX / 2;
std::cout << n << std::endl;

if (n > 0)
{
std::cout << "is positive" << std::endl;
}
else if (n == 0)
{
std::cout << "is zero" << std::endl;
}
else
{
std::cout << "is negative" << std::endl;
}
return (0);
}
