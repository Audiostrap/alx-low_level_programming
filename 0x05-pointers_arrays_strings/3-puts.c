#include "main.h"
int _putchar(char c);

/**
 * _puts -  function that prints a string,
 * followed by a new line, to stdout
 * @str: an integer pointer
 *
 * Return: Always return 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
