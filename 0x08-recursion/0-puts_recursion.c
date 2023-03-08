#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * @s: parameter
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
