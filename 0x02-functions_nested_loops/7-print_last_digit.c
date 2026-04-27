#include"main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @int n: Digit from which to extract the number
 * Return: An integer
 */
int print_last_digit(int n)
{
	int lastD;

	if (n < 0)
		n = -n;

	lastD = n % 10;
	_putchar(lastD + '0');
	return  lastD;
}
