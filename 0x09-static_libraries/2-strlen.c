#include "main.h"
/**
 * _strlen - length of character
 *
 * @s: parameter
 *
 * Return: n
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
