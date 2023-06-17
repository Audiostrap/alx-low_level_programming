#include <stdio.h>

/**
 * main - print the alphabet in lower case
 * followed by new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
