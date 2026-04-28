#include"main.h"
/**
 * times_table - Prints the nine times tables
 *
 * Return: Always nothing
 */
void times_table(void)
{
	int table;
	int mult;

	for(table = 0; table < 10; table++)
	{
		for(mult = 0; mult < 10; mult++)
		{
			if (mult == 9)
			{
				printf("%d", table * mult);
				continue;
			}

			printf("%d, ", table * mult);
		}
		printf("\n");
	}

	return ;
}
