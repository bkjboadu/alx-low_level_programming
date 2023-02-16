#include <stdio.h>

/**
 * main: Entry
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d bytes",sizeof(char));
	printf("Size of a int: %d bytes",sizeof(int));
	printf("Size of a long int: %d bytes",sizeof(long int));
	printf("Size of a long long int: %d bytes",sizeof(long long int));
	printf("Size of a float: %d bytes",sizeof(float));
	return (0);
}

