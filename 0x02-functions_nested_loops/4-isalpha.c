#include "main.h"

/**
 * _isalpha -function checks for alphabetic letter
 * @c: character to print
 * Return: 1 to print
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
