#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks
 * @c: variable
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
