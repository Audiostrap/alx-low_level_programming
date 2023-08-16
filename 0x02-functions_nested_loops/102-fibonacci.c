#include "stdio.h"
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, previous = 1, current = 2, next;

	for (i = 0; i < 50; i++)
	{
		next = previous + current;
		printf("%d, ", next);
		previous = current;
		current = next;
	}
	printf("\n");
	return(0);
}
