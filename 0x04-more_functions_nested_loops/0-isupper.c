#include "main.h"
/**
 * _isupper - checks for upper case letters
 * @c: the letter to be checked
 * Return: 1 if c is uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
