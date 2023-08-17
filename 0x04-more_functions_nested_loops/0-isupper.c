#include "main.h"
#include <stdio.h>
/**
 * main - checks for uppercase
 * @c: The number to be checked
 *
 * Return: 1 if c is uppercase or 0 if otherwise
 */

int_isupper(int c)
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
