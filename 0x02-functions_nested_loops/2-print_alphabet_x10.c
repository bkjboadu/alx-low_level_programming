#include <stdio.h>
#include <string.h>
/**
 * print_alphabet_x10 - Entry level
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
}

/**
 * main - Entry level
 * Return: Always 0(success)
 */

int main(void)
{
	int j = 0;

	for (j = 0; j <= 10; j++)
	{
		print_alphabet_x10();
	}
	putchar('\n');
	return (0);
}
