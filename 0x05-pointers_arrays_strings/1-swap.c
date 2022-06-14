#include <stdio.h>
#include "main.h"
/**
 * swap_int - the function
 * @a: int to swap
 * @b: int2 to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
