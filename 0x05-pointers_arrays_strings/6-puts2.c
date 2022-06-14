#include <stdio.h>
#include "main.h"
/**
 * puts2 - function
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
