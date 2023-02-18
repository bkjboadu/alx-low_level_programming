#include <stdio.h>
/**
 * main - Print alphabet in reverse order
 * Return: Always 0(success)
 */

int main(void)
{
	char alp = 'z';

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
