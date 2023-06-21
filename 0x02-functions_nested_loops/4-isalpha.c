#include "main.h"
/**
 * _isalpha - checks for alphabetical order
 * @c: The character to be checke
 *
 * Return: 1 if c is a letter or 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
