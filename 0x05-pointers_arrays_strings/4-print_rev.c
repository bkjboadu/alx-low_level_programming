#include "main.h"

/**
 * print_rev - check the code
 *
 * @s: parameters
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int long1 = 0;
	int o;

	while (*s != '\0')
	{
		long1++;
		s++;
	}
	s--;
	for (o = long1; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
