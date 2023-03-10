#include "main.h"

/**
 * _abs - Entry
 *
 * @a: received argument
 *
 * Return: 0
 */

int _abs(int a)
{
	if (a >= 0)
		a = a;
	else if (a < 0)
		a = -(a);
	return (a);
}
