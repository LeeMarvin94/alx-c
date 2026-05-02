#include"main.h"
/**
 * main - A simple program that runs the alphabet in lowercase
 *
 * Return: Always zero
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return 0;
}
