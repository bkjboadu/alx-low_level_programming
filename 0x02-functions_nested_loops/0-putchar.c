#include <stdio.h>
#include <string.h>

/**
 * main - Entry level
 * Return: Always(0)
 */

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; i < strlen(ch); i++)
	{
		putchar(ch[i]);
	}
	putchar('\n');
	return (0);
}
