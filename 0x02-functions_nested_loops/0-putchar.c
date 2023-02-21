#include <stdio.h>
#include "main.h"

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
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
