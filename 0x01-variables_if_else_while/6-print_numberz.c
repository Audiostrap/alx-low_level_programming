#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 to 0
 * followed by a new line.
 *
 * Return: o (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
