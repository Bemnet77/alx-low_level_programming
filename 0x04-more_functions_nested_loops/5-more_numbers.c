#include <stdio.h>
#include "main.h"
/**
 * more_numbers - function
 */
void more_numbers(void)
{
	int a, c = 0;

	while (c <= 10)
	{
		for (int a = 0; a <= 14; a++)
		{
			printf("%d", a);
		}
		printf("\n");
		c++;
	}
}
