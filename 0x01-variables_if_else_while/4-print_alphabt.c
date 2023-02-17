#include <stdio.h>
/**
 * main - Print alphabets except q and e
 * Return: Always 0(success)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' || ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
