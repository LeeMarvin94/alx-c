#include"main.h"
/**
 * _abs - Computes the absolue value of an integer and returns it
 *
 * @n (int): The number from which to computes the absolute value
 * Return: An integer
 */
int _abs(int n)
{
	if (n >= 0)
		return n;
	else
		return (-n);
}
