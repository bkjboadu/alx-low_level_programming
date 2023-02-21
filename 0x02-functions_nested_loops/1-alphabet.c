#include <stdio.h>
#include <string.h>
/**
 * print_alphabet - Entry level
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char i;

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
	int result;

	print_alphabet();
	putchar('\n');
	return (0);
}
