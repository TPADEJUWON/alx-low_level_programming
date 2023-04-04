#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int c, sumOne, sumTwo ;

	sumOne = 0;
	sumTwo = 0;

	for (c = 0; c < size; c++)
	{
		sumOne = sumOne + a[c * size + c];
	}

	for (c = size - 1; c >= 0; c--)
	{
		sumTwo += a[c * size + (size - c - 1)];
	}

	printf("%d, %d\n", sumOne, sumTwo);
}
