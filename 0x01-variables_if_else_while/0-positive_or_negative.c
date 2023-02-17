#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: always 0(successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n < 0)
	{
		printf("%d is negative", n);
	} else
	{
		printf("%d is zero", n);
	}
}
