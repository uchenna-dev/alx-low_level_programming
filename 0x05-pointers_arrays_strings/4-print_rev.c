#include <stdio.h>
/**
 * _puts - print a string
 * @str: pointer char
 * Return: void
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
_putchar('\n');
return;
}
