#include "main.h"
int string_length(char *pointer);
/**
 * rev_string - function that reverses a string.
 * @s: stores the string
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int length, c;
	char *begin, *end;

	length = string_length(s);
	begin = s;
	end = s + length - 1;

	for (c = 0; c < length / 2; c++)
	{
		char temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
