#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: it doesn't return
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{putchar(letter);
		}
		putchar('\n');
	}
}
