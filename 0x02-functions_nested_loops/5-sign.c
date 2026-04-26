#include"main.h"
/**
 * print_sign - Prints the sign of a number
 *
 * @n (int):Number to be checked
 * Return: 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return 1;
	}
	else if (n < 0)
	{
		_putchar(45);
		return -1;
	}
	else
	{
		_putchar(48);
		return 0;
	}
}

