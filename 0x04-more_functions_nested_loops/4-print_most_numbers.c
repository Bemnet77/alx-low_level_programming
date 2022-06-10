#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - lalal
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0 ; a < 10; a++)
	{
		if (a != 2 && a != 4)
			printf("%d", a);
	}
	printf("\n");
}
