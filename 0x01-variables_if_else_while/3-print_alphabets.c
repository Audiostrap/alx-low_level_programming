#include <stdio.h>
/**
 * main - print the alphabet in lower case
 * and then in uppercase followed by a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch;
	char chh;

	for (ch = 'a'; ch <= 'z'; ch++);
	for (chh = 'A'; chh <= 'Z'; chh++);
	{
	putchar (ch);
	putchar (chh);
	}
	putchar('\n');
	return (0);
}
