#include"main.h"
/**
 * _isalpha - Checks for alphabetic character
 *
 * @c (int): Integer to be checked
 * Return: An integer (0 or 1)
 */
int _isalpha(int c)
{ /* 65 to 70  97 to 122 */
	if ((c >= 65 && c <= 79) || (c >= 97 && c <= 122))
		return 1;
	else
		return 0;
}


