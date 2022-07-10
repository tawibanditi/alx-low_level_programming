#include "main.h"

/**
 * print_diagonal -> printing diagonal
 * @n: integer params
 */
void print_diagonal(int n)
{
	int x;
	
	int i;

	if (n <= 0)
	_putchar('\n');
	else
	{
	for (x = 0; x< n; x++)
	{
	for (i = 0; i < n; i++)
	_putchar(' ');
	_putchar(92);
	_putchar('\n');
	}
}
}
