#include <stdio.h>

/**
 * main - Print single digit numbers in base 10
 * Return: Always 0(success)
 */

int main(void)
{
	int number = 0;

	for (number = 0; number <= 9; number++)
	{
		printf("%d", number);
	}
	return (0);
}
