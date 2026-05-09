#include"main.h"
/**
 * main - Prints the lowercase alphabet in reverse order
 *
 * Return: Always 0
 */
int main(void)
{
	/** 97 to 122 **/
	int c;

	for (c = 122; c >= 97; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}



