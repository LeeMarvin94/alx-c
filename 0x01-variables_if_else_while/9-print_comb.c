#include"main.h"
/**
 * main - Prints all possible combinations of a single digit number
 *
 * Return: Always 0
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
