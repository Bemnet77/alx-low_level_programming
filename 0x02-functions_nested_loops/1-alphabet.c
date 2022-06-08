#include <stdio.h>
#include "main.h"
void print_alphabet(void);
/**
 * main - idk
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - it prints alphabet
 * Return: returns nothing
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		putchar(letter);
	putchar('\n');
}
