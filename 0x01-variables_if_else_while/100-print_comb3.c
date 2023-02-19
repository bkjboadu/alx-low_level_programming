#include <stdio.h>

/**
 * main - invent
 * Return: 0(success)
 */

int main(void)
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i == j)
			continue;
			else if (j < i)
			continue;
			else
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
