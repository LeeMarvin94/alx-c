#include"main.h"
/**
 * print_alphabet - Writes the alphabet in lowercase letters
 *
 * Return: Always nothing
 */
void print_alphabet(void)
{
	int c;

	for(c = 97; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return ;
}

