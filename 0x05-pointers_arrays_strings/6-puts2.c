#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: character to be checked
 *
 * Return: Always return 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
  *_strlen - finds the length of a string.
  * Return: length of c.
  * @pointer: pointer.
  */
int _strlen(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
