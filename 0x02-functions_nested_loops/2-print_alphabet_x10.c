#include "main.h"

/**
 * main - Entry point
 *
 * Printing alphabets x10
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int alphabet;
int count;
count = 0;
while (count < 10)
{
for (alphabet = 'a'; alpabet <= 'z'; alphabet++)
{	
_putchar(alphabet);
}
count++;
_putchar('\n');
}
}
