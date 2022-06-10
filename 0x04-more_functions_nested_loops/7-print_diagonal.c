#include <stdio.h>
#include "main.h"

/**
 * print_diagonal -file
 * @n: jk
 */
void print_digonal(int n)
{
	int x, y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y < x; y++)
		{
			putchar(' ');
		}
		printf("\\\n");
	}
	if (n <= 0)
		printf("\n");
}
