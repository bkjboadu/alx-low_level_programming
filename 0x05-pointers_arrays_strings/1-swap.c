#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: intermediate parameter
 *
 * @b: parameter
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
