#include <stdio.h>
/**
 * main - Hexadecimal
 * Return: 0(success)
 */

int main(void)
{
	int num = 0;
	char alp = 'a';

	for (num = 0; num < 10; num++)
	{
		putchar(48 + num);
	}

	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
