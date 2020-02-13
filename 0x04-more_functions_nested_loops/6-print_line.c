#include "holberton.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 **/
void print_line(int n)
{
	short i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}