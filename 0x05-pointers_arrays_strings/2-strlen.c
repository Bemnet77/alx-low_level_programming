#include <stdio.h>
#include "main.h"
/**
 * _strlen - function
 * @s: string to count
 * Return: string count
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
