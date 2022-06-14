#include <stdio.h>
#include "main.h"
/**
 * _puts - function
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
