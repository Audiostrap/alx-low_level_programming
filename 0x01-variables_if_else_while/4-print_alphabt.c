#include <stdio.h>
/**
 * main - print alphabet in lowercase followed by new line
 * skip e and q
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
