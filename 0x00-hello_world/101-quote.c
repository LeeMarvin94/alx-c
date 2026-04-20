#include"main.h"
/**
 * main - Simple program that prints a specific message with limitations on the functions to be used
 *
 * Return: Always 0
 */
int main(void)
{
        char *str = "that piece of art is useful\" - Dora Korpar, 2015-10-19 ,";
        int size = 0;
        int i = 0;

        while (str[i] != '\0')
	{
                size++;
		i++;
	}

        for(i = 0; i < size; i++)
        {
                putchar(str[i]);
        }
        putchar('\n');

        return 0;
}
