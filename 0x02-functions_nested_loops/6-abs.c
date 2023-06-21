#include "main.h"
/**
 *_abs - computes the absolute value of an integer
 *@num: The character to be checked
 *
 * Return: 1 (success)
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
