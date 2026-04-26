#include"main.h"
/**
 *  _islower - Checks for lowercase characters and returns 1 if so and 0 either
 *
 * @c: char
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return 1;
	else
		return 0;
}
