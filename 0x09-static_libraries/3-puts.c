#include "main.h"
/**
 * _puts - print strings
 *
 * @str: parameter
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
