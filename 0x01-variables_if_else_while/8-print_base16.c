#include"main.h"
/**
 * main - Prints all numbers of the base 16 followed by a new line
 *
 * Return: Always a number
 */
int main(void)
{
	int c;

        for (c = 48; c <= 57; c++)
        {
                putchar(c);
        }
	for (c = 97; c <= 'f'; c++)
	{
		putchar(c);
	}
        putchar('\n');

        return (0);
}


