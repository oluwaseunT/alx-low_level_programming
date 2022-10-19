#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet in lower case 10 times
 * Return: 0
*/
void print_alphabet_x10(void)
{
int x = 1;
while (x <= 10)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
x++;
}
}
