#include<stdio.h>
/**
 * main - Computes the sum of all natural numbers multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	const int LIMIT = 1024;
	int sum = 0;
	int i;

	for (i = 0; i < LIMIT; i++)
	{
		if (i%3 == 0 || i%5 == 0)
			sum +=i;
	}
	printf("The sum of multiples of 3 or 5 below 1024 is: %d\n", sum);

	return (0);
}
