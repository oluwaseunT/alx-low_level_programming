#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints in lower case alphabets followed by upper case
 * Return: 0
*/
int main(void)
{
char n;
n = 'a';
while (n <= 'z')
{
putchar(n);
n++;
}
n = 'A';
while (n <= 'Z')
{
putchar (n);
n++
}
putchar('\n');
return (0);
}
