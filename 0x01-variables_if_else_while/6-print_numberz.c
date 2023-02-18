#include <stdio.h>
/**
 * main - Print single digit numbers using putchar()
 * Return: Always 0(success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num);
		num++;
	}
	putchar('\n');
	return (0);
}
