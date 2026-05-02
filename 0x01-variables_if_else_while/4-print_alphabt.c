#include"main.h"
/**
 * main - Displaying the alphabet in lowercase except two letters
 *
 * Return: Always zero
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
