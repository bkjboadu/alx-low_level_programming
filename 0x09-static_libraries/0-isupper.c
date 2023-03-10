#include "main.h"

/**
 * _isupper - Checks uppercase letters
 *
 * @c: letter arguments
 *
 * Return: 1 (Success) and 0 (failed)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
