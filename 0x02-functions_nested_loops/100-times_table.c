#include"main.h"
/**
 * print_times_table - Prints N times table
 *
 * @n: Number of tables to be printed
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
	{

	}

	else
	{
	for(i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if ( j == n )
			{
				printf("%d", j*i);
				continue;
			}
			printf("%d,   ", j*i);
		}
		printf("\n");
	}
	}

	return ;
}


