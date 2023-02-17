#include <stdio.h>
#include <string.h>
/**
 * main - Print alphabets in lowercase
 * Return: Always 0(successful)
 */
int main(void)
{
	char ch = 'a';
	char N = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (N = 'A'; N <= 'Z'; N++)
	{
		putchar(N);
	}
	putchar('\n');
	return (0);
}
