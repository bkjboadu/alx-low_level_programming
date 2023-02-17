#include <stdio.h>
#include <string.h>
/**
 * main - Print alphabets in lowercase
 * Return: Always 0(successful)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
