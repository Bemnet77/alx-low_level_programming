#include <stdio.h>                                                                                                                      
/**
 * main - print numberz
 * Return: 0
 */
int main(void)
{
int n;
int num;
for (num = 0; num < 10; num++)
putchar((num % 10) + '0');
putchar('\n');
}