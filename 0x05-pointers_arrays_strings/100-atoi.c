#include "main.h"
<<<<<<< HEAD

/**
 * *_atoi - convert string to number.
 * 
 * @s: string reference
 * Return: conversion
 */

int _atoi(char *s)
{
int i, res = 0, sig = -1, brk = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
sig = sig * -1;
if (s[i] >= '0' && s[i] <= '9')
{
res = res * 10;
res = res - (s[i] - '0');
brk = 1;
}
else if (brk == 1)
break;
}
res = sig *res;
return (res);
=======
/**
 * is_numerical - check if it is a digit
 * @n: Number
 * Return: if is a number, return 1 else return 0
 */
int is_numerical(unsigned int n)
{
return (n >= '0' && n <= '9');
}                                                                                                                   /**
 * _atoi - convert a string to an integer
 * @s: String
 * Return: Return the num 
 */
int _atoi(char *s)
{
unsigned int number, i;
int sign;
sign = 1;
number = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (is_numerical(s[i]))
{
number = (s[i] - 48) + number * 10;
if (s[i + 1] == ' ')
break;
}
else if (s[i] == '-')
{
sign *= -1;
}
}
return (number * sign);
>>>>>>> d235a8cfddb81ea77008263dc2170795b35d57c0
}
