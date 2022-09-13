#include "main.h"

/**
 * print_last_digit - print the last digit of an integer
 * @num: the number to be processed
 *
 * Return: last digit of num
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
