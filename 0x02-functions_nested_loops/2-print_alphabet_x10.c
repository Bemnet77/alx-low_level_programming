#include <stdio.h>
void print_alphabet_x10(void);
/**
 * main - calls function
 * Return: 0
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
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
