#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c;
float f;
long int li;
long long int lli;
printf("Size of a int: %d byte(s)\n", (int)sizeof(i));
printf("Size of an char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a float: %g byte(s)\n", (float)sizeof(li));
printf("Size of a long int: %ld byte(s)\n", (long int)sizeof(li));
printf("Size of a long long int: %lld byte(s)\n", (long long int)sizeof(lli));
return (0);
}
