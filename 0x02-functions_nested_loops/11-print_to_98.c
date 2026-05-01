#include"main.h"
/**
 * print_to_98 - Prints numbers from n to 98
 *
 * @n:Number from which to print the number
 * Return: Always nothing 
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				continue;
			}
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			printf("%d, ", i);
		}
	}

	return; 
}
