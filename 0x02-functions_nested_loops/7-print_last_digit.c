#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit -> print the last digit
 * @n: the passed argument
 * Return: the last digit
 *
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
