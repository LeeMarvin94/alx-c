#include"main.h"
/**
 * main - Prints the alphabet in both lowercase and uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}
	for (c = 65; c < 91 ; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
