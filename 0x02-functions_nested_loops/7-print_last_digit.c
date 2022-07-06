#include "main.h"
/**
 * main:print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
int a;

if (n < 0)

n = -n;

a = n % 10;

if (a < 0)

a = -a;

_putchar(a + '0');

return (a);

}
