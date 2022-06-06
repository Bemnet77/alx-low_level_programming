#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - checks numbers
 * Return: 0
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
putchar (ch);
}
putchar ('\n');
return (0);
}
